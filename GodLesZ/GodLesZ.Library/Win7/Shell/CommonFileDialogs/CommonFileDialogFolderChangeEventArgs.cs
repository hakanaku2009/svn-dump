

using System.ComponentModel;

namespace GodLesZ.Library.Win7.Dialogs {
	/// <summary>
	/// Creates the event data associated with <see cref="CommonFileDialog.FolderChanging"/> event.
	/// </summary>
	/// 
	public class CommonFileDialogFolderChangeEventArgs : CancelEventArgs {
		/// <summary>
		/// Creates a new instance of this class.
		/// </summary>
		/// <param name="folder">The name of the folder.</param>
		public CommonFileDialogFolderChangeEventArgs(string folder) {
			Folder = folder;
		}

		/// <summary>
		/// Gets or sets the name of the folder.
		/// </summary>
		public string Folder { get; set; }

	}
}