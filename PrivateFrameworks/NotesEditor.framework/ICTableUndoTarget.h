
@interface ICTableUndoTarget : NSObject <ICTTTextUndoTarget> {
    ICTableAttachmentProvider * _provider;
    ICTableAttachmentViewController * _tableAttachmentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICTableAttachmentProvider *provider;
@property (readonly) Class superclass;
@property (nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (nonatomic, readonly) ICTableAttachmentViewController *tableAttachmentViewControllerForUndo;

- (void).cxx_destruct;
- (void)applyUndoGroup:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithProvider:(id)arg1 viewController:(id)arg2;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void)setTableAttachmentViewController:(id)arg1;
- (id)tableAttachmentViewController;
- (id)tableAttachmentViewControllerForUndo;

@end
