
@interface CNContactDisableGuardianRestrictionsAction : CNContactAction {
    CNContactStore * _contactStore;
    CNContainer * _container;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContainer *container;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)contactStore;
- (id)container;
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;
- (bool)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (id)title;

@end
