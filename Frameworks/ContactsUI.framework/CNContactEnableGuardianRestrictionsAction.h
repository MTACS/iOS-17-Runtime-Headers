
@interface CNContactEnableGuardianRestrictionsAction : CNContactAction {
    CNContactStore * _contactStore;
    CNContainer * _container;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContainer *container;

- (void).cxx_destruct;
- (id)contactStore;
- (id)container;
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;

@end
