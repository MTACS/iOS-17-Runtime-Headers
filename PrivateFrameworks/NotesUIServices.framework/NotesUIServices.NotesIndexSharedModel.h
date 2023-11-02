
@interface NotesUIServices.NotesIndexSharedModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  attachmentURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void hasUnreadChanges;
    void notesFolder;
    void showCollaboratorBadge;
}

- (void).cxx_destruct;
- (id)init;

@end
