
@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject

+ (bool)cloudKitMirroringEnabled;
+ (void)configureMirroringRequestOptions:(id)arg1;
+ (void)configureMirroringRequestOptions:(id)arg1 discretionary:(bool)arg2;
+ (void)configureStoreDescriptionForMirroring:(id)arg1 logger:(id)arg2;
+ (id)createMirroringHandlerWithEnvironment:(id)arg1;
+ (id)currentContainerIdentifier;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)managedModelAttributesRequiredForMirroring;
+ (bool)manateeContainer:(id)arg1;

@end
