
@interface CNUIContactSaveConfiguration : NSObject {
    CNContact * _contact;
    CNContactStore * _contactStore;
    CNUIContainerContext * _containerContext;
    NSMutableArray * _editingLinkedContacts;
    CNUIGroupContext * _groupContext;
    bool  _ignoresParentalRestrictions;
    CNMutableContact * _mutableContact;
    CNContainer * _parentContainer;
    CNGroup * _parentGroup;
    bool  _saveWasAuthorized;
    CNMutableContact * _shadowCopyOfReadonlyContact;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNUIContainerContext *containerContext;
@property (nonatomic, readonly) NSMutableArray *editingLinkedContacts;
@property (nonatomic, readonly) CNUIGroupContext *groupContext;
@property (nonatomic, readonly) bool ignoresParentalRestrictions;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) CNContainer *parentContainer;
@property (nonatomic, readonly) CNGroup *parentGroup;
@property (nonatomic, readonly) bool saveWasAuthorized;
@property (nonatomic, readonly) CNMutableContact *shadowCopyOfReadonlyContact;

- (void).cxx_destruct;
- (id)contact;
- (id)contactStore;
- (id)containerContext;
- (id)copyWithEditingLinkedContacts:(id)arg1;
- (id)editingLinkedContacts;
- (id)groupContext;
- (bool)ignoresParentalRestrictions;
- (id)initWithContact:(id)arg1 mutableContact:(id)arg2 editingLinkedContacts:(id)arg3 contactStore:(id)arg4 ignoresParentalRestrictions:(bool)arg5 saveWasAuthorized:(bool)arg6;
- (id)initWithContact:(id)arg1 mutableContact:(id)arg2 shadowCopyOfReadonlyContact:(id)arg3 editingLinkedContacts:(id)arg4 contactStore:(id)arg5 parentGroup:(id)arg6 parentContainer:(id)arg7 containerContext:(id)arg8 groupContext:(id)arg9 ignoresParentalRestrictions:(bool)arg10 saveWasAuthorized:(bool)arg11;
- (id)mutableContact;
- (id)parentContainer;
- (id)parentGroup;
- (bool)saveWasAuthorized;
- (id)shadowCopyOfReadonlyContact;

@end
