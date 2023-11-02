
@interface HFCameraSignificantEventConfiguration : NSObject <NSCopying> {
    unsigned long long  _eventTypes;
    unsigned long long  _personFamiliarityOptions;
}

@property (nonatomic) unsigned long long eventTypes;
@property (nonatomic, readonly) bool isFaceDetectionConfiguration;
@property (nonatomic) unsigned long long personFamiliarityOptions;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_configurationForCameraProfiles:(id)arg1 eventTypesTransform:(id /* block */)arg2 personFamiliarityOptionsTransform:(id /* block */)arg3;
+ (id)configurationForCameraProfilesNotificationSettings:(id)arg1;
+ (id)configurationForCameraProfilesRecordingSettings:(id)arg1;
+ (id)configurationWithEventTypes:(unsigned long long)arg1 personFamiliarityOptions:(unsigned long long)arg2;
+ (id)defaultAnyMotionConfiguration;
+ (id)defaultSmartMotionConfiguration;

- (void)addConfiguration:(id)arg1;
- (bool)containsConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)eventTypes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFaceDetectionConfiguration;
- (id)localizationKey;
- (id)localizedDescription;
- (unsigned long long)personFamiliarityOptions;
- (id)predicateRepresentation;
- (void)removeConfiguration:(id)arg1;
- (void)setEventTypes:(unsigned long long)arg1;
- (void)setPersonFamiliarityOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)defaultNotificationAnyMotionIsDetected;

@end
