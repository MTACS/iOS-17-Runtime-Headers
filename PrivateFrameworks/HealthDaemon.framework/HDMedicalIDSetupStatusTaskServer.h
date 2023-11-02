
@interface HDMedicalIDSetupStatusTaskServer : HDStandardTaskServer <HKMedicalIDSetupStatusServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_medicalIDSetUpStatusWithCompletion:(id /* block */)arg1;

@end
