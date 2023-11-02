
@interface CNUIContactStoreSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;
- (bool)handleContainerContextForSaveConfiguration:(id)arg1 contactToSave:(id)arg2 saveDelegate:(id)arg3 issuedRequestIdentifiers:(id)arg4 additionalLinkedContacts:(id)arg5;
- (void)handleGroupContextForSaveConfiguration:(id)arg1 contactToSave:(id)arg2 issuedRequestIdentifiers:(id)arg3 saveDelegate:(id)arg4;
- (bool)performSaveForMutableContact:(id)arg1 group:(id)arg2 container:(id)arg3 saveConfiguration:(id)arg4 issuedRequestIdentifiers:(id)arg5;
- (id)saveLinkedContactsWithSaveConfiguration:(id)arg1 contactToSave:(id)arg2 additionalLinkedContacts:(id)arg3 issuedRequestIdentifiers:(id)arg4 saveDelegate:(id)arg5;
- (bool)saveShadowContactForSaveConfiguration:(id)arg1;
- (id)validatedContactForSaveConfiguration:(id)arg1 preservingIdentifier:(bool)arg2;

@end
