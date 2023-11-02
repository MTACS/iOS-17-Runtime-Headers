
@interface CNContactClearRecentsDataAction : CNContactAction {
    CNUICoreRecentsManager * _coreRecentsManager;
    CNContactRecentsReference * _recentsData;
}

@property (nonatomic, readonly) CNUICoreRecentsManager *coreRecentsManager;
@property (nonatomic, readonly) CNContactRecentsReference *recentsData;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)coreRecentsManager;
- (id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2;
- (bool)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (id)recentsData;
- (id)title;

@end
