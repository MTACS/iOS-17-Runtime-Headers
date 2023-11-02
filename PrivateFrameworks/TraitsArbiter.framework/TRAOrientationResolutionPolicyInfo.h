
@interface TRAOrientationResolutionPolicyInfo : NSObject <BSDescriptionProviding, NSCopying> {
    TRASettingsActuationContext * _actuationContext;
    NSArray * _associatedDeviceOrientationStateTypes;
    NSDictionary * _associatedDeviceOrientationStateTypesBySupportedOrientationMask;
    NSString * _associatedParticipantRole;
    NSString * _associatedParticipantUniqueIdentifier;
    bool  _forceResolution;
    long long  _resolutionPolicy;
}

@property (nonatomic, copy) TRASettingsActuationContext *actuationContext;
@property (nonatomic, readonly, copy) NSArray *associatedDeviceOrientationStateTypes;
@property (nonatomic, readonly, copy) NSDictionary *associatedDeviceOrientationStateTypesBySupportedOrientationMask;
@property (nonatomic, readonly, copy) NSString *associatedParticipantRole;
@property (nonatomic, readonly, copy) NSString *associatedParticipantUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceResolution;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long resolutionPolicy;
@property (readonly) Class superclass;

+ (id)resolutionPolicyInfoDeviceOrientation;
+ (id)resolutionPolicyInfoDeviceOrientationWithStateTypes:(id)arg1;
+ (id)resolutionPolicyInfoDeviceOrientationWithStateTypesBySupportedOrientationMask:(id)arg1;
+ (id)resolutionPolicyInfoForAssociatedParticipantWithRole:(id)arg1;
+ (id)resolutionPolicyInfoForAssociatedParticipantWithUniqueID:(id)arg1;
+ (id)resolutionPolicyInfoIsolation;
+ (id)resolutionPolicyInfoOrientationBelow;
+ (id)resolutionPolicyInfoOrientationBelowParticipantWithRole:(id)arg1;
+ (id)resolutionPolicyInfoOrientationBelowParticipantWithUniqueID:(id)arg1;

- (void).cxx_destruct;
- (id)actuationContext;
- (id)associatedDeviceOrientationStateTypes;
- (id)associatedDeviceOrientationStateTypesBySupportedOrientationMask;
- (id)associatedParticipantRole;
- (id)associatedParticipantUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)forceResolution;
- (id)initWithResolutionPolicy:(long long)arg1;
- (id)initWithResolutionPolicy:(long long)arg1 associatedAccStateTypes:(id)arg2;
- (id)initWithResolutionPolicy:(long long)arg1 associatedAccStateTypesByMask:(id)arg2;
- (id)initWithResolutionPolicy:(long long)arg1 associatedParticipantRole:(id)arg2;
- (id)initWithResolutionPolicy:(long long)arg1 associatedParticipantUniqueID:(id)arg2;
- (id)initWithResolutionPolicy:(long long)arg1 associatedParticipantUniqueID:(id)arg2 associatedParticipantRole:(id)arg3 associatedAccStateTypes:(id)arg4;
- (id)initWithResolutionPolicy:(long long)arg1 associatedParticipantUniqueID:(id)arg2 associatedParticipantRole:(id)arg3 associatedAccStateTypes:(id)arg4 associatedAccStateTypesByMask:(id)arg5;
- (id)initWithResolutionPolicyInfo:(id)arg1;
- (long long)resolutionPolicy;
- (void)setActuationContext:(id)arg1;
- (void)setAssociatedDeviceOrientationStateTypes:(id)arg1;
- (void)setForceResolution:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
