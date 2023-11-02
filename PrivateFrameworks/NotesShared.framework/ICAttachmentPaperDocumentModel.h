
@interface ICAttachmentPaperDocumentModel : ICAttachmentPaperBundleModel

@property (nonatomic) unsigned long long paperPageCount;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)additionalIndexableTextContentInNote;
- (unsigned long long)paperPageCount;
- (void)setPaperPageCount:(unsigned long long)arg1;
- (bool)supportsQuickLook;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)itemProviderUTI;
- (void)registerFileLoadHandlersOnItemProvider:(id)arg1;

@end
