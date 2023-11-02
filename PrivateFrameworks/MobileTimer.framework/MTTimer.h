
@interface MTTimer : NSObject <MTDictionarySerializable, MTScheduleable, MTSerializable, MTTimerIntentSupport, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding> {
    id /* block */  _currentDateProvider;
    NSDate * _dismissedDate;
    double  _duration;
    <MTTimerTime> * _fireTime;
    NSDate * _firedDate;
    NSDate * _lastModifiedDate;
    NSDictionary * _siriContext;
    MTSound * _sound;
    unsigned long long  _state;
    NSUUID * _timerID;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *dismissedDate;
@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double duration;
@property (nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, copy) <MTTimerTime> *fireTime;
@property (nonatomic, copy) NSDate *firedDate;
@property (getter=isFiring, nonatomic, readonly) bool firing;
@property (nonatomic, readonly) bool hasDefaultTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) NSDictionary *siriContext;
@property (nonatomic, copy) NSDictionary *siriContext;
@property (nonatomic, copy) MTSound *sound;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *timerID;
@property (nonatomic, readonly) NSString *timerIDString;
@property (nonatomic, readonly) NSURL *timerURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)_timerTimeForState:(unsigned long long)arg1 remainingTime:(double)arg2 currentDateProvider:(id /* block */)arg3;
+ (id)currentTimerFromTimers:(id)arg1;
+ (id)descriptionForState:(unsigned long long)arg1;
+ (id)firstActiveTimerFromTimers:(id)arg1;
+ (bool)isActiveTimer:(id)arg1;
+ (id)propertiesAffectingSessions;
+ (bool)stateChangeIsAllowableFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyStateOntoTimer:(id)arg1;
- (id)_initCommon;
- (bool)_isEqualToTimer:(id)arg1 checkLastModified:(bool)arg2;
- (void)_setDuration:(double)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)currentDateProvider;
- (id)description;
- (id)dismissedDate;
- (id)displayTitle;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)fireTime;
- (id)firedDate;
- (bool)hasDefaultTitle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 duration:(double)arg2;
- (id)initWithState:(unsigned long long)arg1 duration:(double)arg2 currentDateProvider:(id /* block */)arg3;
- (bool)isCurrentTimer;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringLastModifiedDate:(id)arg1;
- (bool)isEqualToTimer:(id)arg1;
- (bool)isFiring;
- (id)lastModifiedDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextTrigger;
- (id)nextTriggerAfterDate:(id)arg1;
- (double)remainingTime;
- (void)serializeWithSerializer:(id)arg1;
- (void)setCurrentDateProvider:(id /* block */)arg1;
- (void)setDismissedDate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFireTime:(id)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setFiring:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setSiriContext:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldBeScheduled;
- (id)siriContext;
- (id)sound;
- (unsigned long long)state;
- (id)timerByRestarting;
- (id)timerByUpdatingWithState:(unsigned long long)arg1;
- (id)timerID;
- (id)timerIDString;
- (id)timerURL;
- (id)title;
- (long long)type;
- (id)upcomingTriggersAfterDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

- (id)co_preferredTimer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)hash;
- (id)hf_targetAccessoryInHome:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
