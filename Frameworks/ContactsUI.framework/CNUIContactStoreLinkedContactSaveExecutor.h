
@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;
- (id)saveLinkedContactChanges:(id)arg1 mutableContact:(id)arg2 contactStore:(id)arg3 editingLinkedContacts:(id)arg4 ignoresParentalRestrictions:(bool)arg5 saveWasAuthorized:(bool)arg6 issuedSaveRequestIdentifiers:(id)arg7;

@end
