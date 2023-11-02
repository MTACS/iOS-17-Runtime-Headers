
@interface CNContactListRemoveContactFromGroupAction : NSObject {
    CNContact * _contact;
    CNContactStore * _contactStore;
    NSString * _containerIdentifier;
    CNGroup * _group;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CNGroup *group;

+ (id)log;

- (void).cxx_destruct;
- (id)contact;
- (id)contactStore;
- (id)containerIdentifier;
- (bool)executeAction;
- (bool)executeRemoveFromGroupAction;
- (id)group;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2 containerIdentifier:(id)arg3;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)undoAction;
- (void)undoRemoveFromGroupAction;

@end
