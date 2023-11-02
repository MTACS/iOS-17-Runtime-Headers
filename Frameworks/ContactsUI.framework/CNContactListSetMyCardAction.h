
@interface CNContactListSetMyCardAction : CNContactListUndoableAction {
    CNContact * _originalMeContact;
}

@property (nonatomic, retain) CNContact *originalMeContact;

+ (id)log;

- (void).cxx_destruct;
- (void)fetchOriginalMeContact;
- (id)initWithContact:(id)arg1 configuration:(id)arg2;
- (id)originalMeContact;
- (void)performAction;
- (void)performUndoAction;
- (void)setOriginalMeContact:(id)arg1;
- (void)updateMeContact:(id)arg1;
- (id)updatedMeContact;

@end
