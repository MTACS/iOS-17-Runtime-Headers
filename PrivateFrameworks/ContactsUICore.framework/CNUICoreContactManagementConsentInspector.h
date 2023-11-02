
@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck> {
    STManagementState * _managementState;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STManagementState *managementState;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)arg1;

- (void).cxx_destruct;
- (id)contactManagementConsentStateFutureForDSID:(id)arg1;
- (unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1;
- (id)init;
- (id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2;
- (id)managementState;
- (id)schedulerProvider;

@end
