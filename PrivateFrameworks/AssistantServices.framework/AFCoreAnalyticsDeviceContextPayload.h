
@interface AFCoreAnalyticsDeviceContextPayload : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSNumber * _alarmFiring;
    NSString * _contextIdentifier;
    NSNumber * _homeAnnouncementRecency;
    NSString * _homeAnnouncementState;
    NSString * _nearbyDevicesRequestIdentifier;
    NSString * _nearbyProductType;
    NSNumber * _playbackRecency;
    NSString * _playbackState;
    NSString * _proximity;
    NSString * _targetedResult;
    NSNumber * _timerFiring;
}

@property (nonatomic, readonly, copy) NSNumber *alarmFiring;
@property (nonatomic, readonly, copy) NSString *contextIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *homeAnnouncementRecency;
@property (nonatomic, readonly, copy) NSString *homeAnnouncementState;
@property (nonatomic, readonly, copy) NSString *nearbyDevicesRequestIdentifier;
@property (nonatomic, readonly, copy) NSString *nearbyProductType;
@property (nonatomic, readonly, copy) NSNumber *playbackRecency;
@property (nonatomic, readonly, copy) NSString *playbackState;
@property (nonatomic, readonly, copy) NSString *proximity;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetedResult;
@property (nonatomic, readonly, copy) NSNumber *timerFiring;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)alarmFiring;
- (id)buildDictionaryRepresentation;
- (id)contextIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeAnnouncementRecency;
- (id)homeAnnouncementState;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithNearbyProductType:(id)arg1 proximity:(id)arg2 alarmFiring:(id)arg3 timerFiring:(id)arg4 playbackState:(id)arg5 playbackRecency:(id)arg6 homeAnnouncementState:(id)arg7 homeAnnouncementRecency:(id)arg8 nearbyDevicesRequestIdentifier:(id)arg9 targetedResult:(id)arg10 contextIdentifier:(id)arg11;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)nearbyDevicesRequestIdentifier;
- (id)nearbyProductType;
- (id)playbackRecency;
- (id)playbackState;
- (id)proximity;
- (id)targetedResult;
- (id)timerFiring;

@end
