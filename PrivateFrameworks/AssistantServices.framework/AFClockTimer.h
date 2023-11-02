
@interface AFClockTimer : NSObject <AFClockItem, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSDate * _dismissedDate;
    double  _duration;
    NSDate * _fireDate;
    double  _fireTimeInterval;
    NSDate * _firedDate;
    bool  _isFiring;
    NSDate * _lastModifiedDate;
    long long  _state;
    NSUUID * _timerID;
    NSURL * _timerURL;
    NSString * _title;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *dismissedDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSDate *fireDate;
@property (nonatomic, readonly) double fireTimeInterval;
@property (nonatomic, readonly, copy) NSDate *firedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFiring;
@property (nonatomic, readonly) NSUUID *itemID;
@property (nonatomic, readonly) NSURL *itemURL;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *timerID;
@property (nonatomic, readonly, copy) NSURL *timerURL;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dismissedDate;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (double)fireTimeInterval;
- (id)firedDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTimerID:(id)arg1 timerURL:(id)arg2 isFiring:(bool)arg3 title:(id)arg4 state:(long long)arg5 duration:(double)arg6 type:(long long)arg7 fireTimeInterval:(double)arg8 fireDate:(id)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isFiring;
- (id)itemID;
- (id)itemURL;
- (id)lastModifiedDate;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)state;
- (id)timerID;
- (id)timerURL;
- (id)title;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (id)svx_speakableDurationStringWithLanguageCode:(id)arg1 gender:(long long)arg2;

@end
