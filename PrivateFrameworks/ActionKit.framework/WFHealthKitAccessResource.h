
@interface WFHealthKitAccessResource : WFAccessResource {
    HKHealthStore * _healthStore;
    unsigned long long  _status;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;

+ (bool)alwaysMakeAvailable;
+ (bool)isSystemResource;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)errorReasonForStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;
- (id)healthStore;
- (id)importErrorReasonForStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)objectTypes;
- (id)objectTypesForAccessType:(id)arg1;
- (id)protectedResourceDescription;
- (id)readTypes;
- (id)readableUnauthorizedResourceDescription;
- (void)refreshAvailability;
- (unsigned long long)status;
- (id)writeTypes;

@end
