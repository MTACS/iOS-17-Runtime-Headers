
@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {
    HMCameraUserSettings * _cameraUserSettings;
    NSUUID * _targetUUID;
}

@property HMCameraUserSettings *cameraUserSettings;
@property (readonly) unsigned long long hf_enabledPersonFamiliarityOptions;
@property (readonly) unsigned long long hf_enabledSignificantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;
@property (readonly) unsigned long long significantEventTypes;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)personFamiliarityOptionsInPredicate:(id)arg1;
+ (id)predicateForPersonFamiliarityOptions:(unsigned long long)arg1;
+ (id)predicateForSignificantEventTypes:(unsigned long long)arg1;
+ (id)predicateForSignificantEventTypes:(unsigned long long)arg1 personFamiliarityOptions:(unsigned long long)arg2;
+ (id)significantEventTypesInPredicate:(id)arg1;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2;
- (id)cameraUserSettings;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (id)initWithBulletinBoardNotification:(id)arg1;
- (unsigned long long)personFamiliarityOptions;
- (void)setCameraUserSettings:(id)arg1;
- (unsigned long long)significantEventTypes;
- (id)targetUUID;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)hf_enabledPersonFamiliarityOptions;
- (unsigned long long)hf_enabledSignificantEventTypes;

@end
