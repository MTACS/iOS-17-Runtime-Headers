
@interface FPRenameOperation : FPActionOperation {
    FPItem * _item;
    NSString * _newName;
}

- (void).cxx_destruct;
- (void)actionMain;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (id)initWithItem:(id)arg1 newDisplayName:(id)arg2;
- (id)initWithItem:(id)arg1 newFileName:(id)arg2;
- (id)initWithItem:(id)arg1 newName:(id)arg2;
- (id)initWithItem:(id)arg1 newNameInternal:(id)arg2;
- (void)presendNotifications;

@end
