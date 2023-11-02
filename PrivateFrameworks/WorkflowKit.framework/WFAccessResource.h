
@interface WFAccessResource : WFResource <WFWorkflowReferencing> {
    int  _token;
    WFWorkflow * _workflow;
}

@property (nonatomic, readonly) NSString *associatedAppIdentifier;
@property (nonatomic, readonly) NSString *attemptRecoveryFromErrorMessage;
@property (nonatomic, readonly) NSError *availabilityError;
@property (nonatomic, readonly) bool canLogOut;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly) bool logOutAffectsOtherApps;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *protectedResourceDescription;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) NSDictionary *settingsUIDefinition;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMultipleAccounts;
@property (nonatomic, readonly) int token;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic) WFWorkflow *workflow;

+ (bool)isSystemResource;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)attemptRecoveryFromErrorMessage;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)availabilityError;
- (bool)canLogOut;
- (void)dealloc;
- (id)errorReasonForStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;
- (id)icon;
- (id)importErrorReasonForStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedAttemptRecoveryFromErrorMessage;
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)arg1;
- (void)logOut;
- (bool)logOutAffectsOtherApps;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)name;
- (id)protectedResourceDescription;
- (void)refreshAvailability;
- (void)refreshAvailabilityWithNotification:(bool)arg1;
- (id)resourceName;
- (void)setWorkflow:(id)arg1;
- (id)settingsUIDefinition;
- (unsigned long long)status;
- (bool)supportsMultipleAccounts;
- (int)token;
- (id)username;
- (id)workflow;

@end
