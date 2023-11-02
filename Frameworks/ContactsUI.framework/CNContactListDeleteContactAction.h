
@interface CNContactListDeleteContactAction : NSObject {
    CNContact * _contact;
    CNContactStore * _contactStore;
    NSString * _containerIdentifier;
    CNUICoreRecentsManager * _recentsManager;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CNUICoreRecentsManager *recentsManager;

+ (id)log;

- (void).cxx_destruct;
- (id)contact;
- (id)contactStore;
- (id)containerIdentifier;
- (bool)executeAction;
- (bool)executeDeleteAction;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2 containerIdentifier:(id)arg3 recentsManager:(id)arg4;
- (id)recentsManager;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setRecentsManager:(id)arg1;
- (void)undoAction;
- (void)undoDeleteAction;

@end
