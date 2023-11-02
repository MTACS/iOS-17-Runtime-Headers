
@interface NotesEditor.ICInlineDrawingUpgradeHelper : NSObject {
    void drawingAttachmentIdentifierToPaperAttachment;
    void drawingUpgraders;
    void managedObjectContext;
    void note;
    void textView;
    void upgradeSemaphore;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic) UITextView *textView;

- (void).cxx_destruct;
- (void)cancelUpgrade;
- (id)init;
- (id)initWithNote:(id)arg1 managedObjectContext:(id)arg2 textView:(id)arg3;
- (id)managedObjectContext;
- (id)note;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)upgradeAllAttachmentsInNote;
- (id)upgradeWithAttachment:(id)arg1 itemProviders:(id)arg2 itemsAnchor:(long long)arg3;
- (id)upgradeWithAttachment:(id)arg1 itemProviders:(id)arg2 itemsLocation:(struct CGPoint { double x1; double x2; })arg3;

@end
