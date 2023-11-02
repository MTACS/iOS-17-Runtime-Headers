
@interface ContactsUI.ContactListMergeUnifyActionHelper : NSObject {
    void contactItems;
    void contactStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mergeResult;
}

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)applyMergeResultToSaveRequest:(id)arg1;
- (bool)applyUndoTo:(id)arg1 and:(id)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (void)mergeContacts:(id)arg1 withContainerIdentifiers:(id)arg2 withContactIDToParentGroupsDict:(id)arg3;

@end
