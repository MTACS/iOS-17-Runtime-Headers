
@interface HAPCharacteristicValueLinearDerivedTransitionPoint : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVFloatNumberValue * _offset;
    HAPTLVFloatNumberValue * _scale;
    HAPTLVUnsignedNumberValue * _startDelayDuration;
    HAPTLVUnsignedNumberValue * _targetCompletionDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVFloatNumberValue *offset;
@property (nonatomic, retain) HAPTLVFloatNumberValue *scale;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *startDelayDuration;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *targetCompletionDuration;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithScale:(id)arg1 offset:(id)arg2 targetCompletionDuration:(id)arg3 startDelayDuration:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)offset;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)scale;
- (id)serializeWithError:(id*)arg1;
- (void)setOffset:(id)arg1;
- (void)setScale:(id)arg1;
- (void)setStartDelayDuration:(id)arg1;
- (void)setTargetCompletionDuration:(id)arg1;
- (id)startDelayDuration;
- (id)targetCompletionDuration;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)transitionPointWithMinimumBrightness:(long long)arg1 minimumBrightnessColorTemperature:(long long)arg2 maximumBrightness:(long long)arg3 maximumBrightnessColorTemperature:(long long)arg4 targetCompletionDuration:(unsigned long long)arg5;
+ (id)transitionPointWithPreviousTransitionPoint:(id)arg1 nextTransitionPoint:(id)arg2 timeElapsedSincePreviousTransitionPoint:(unsigned long long)arg3 minimumBrightness:(long long)arg4 maximumBrightness:(long long)arg5;

- (long long)colorTemperatureForBrightness:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)transitionPointWithMinimumBrightness:(long long)arg1 minimumBrightnessColorTemperature:(long long)arg2 maximumBrightness:(long long)arg3 maximumBrightnessColorTemperature:(long long)arg4 targetCompletionDuration:(unsigned long long)arg5;
+ (id)transitionPointWithPreviousTransitionPoint:(id)arg1 nextTransitionPoint:(id)arg2 timeElapsedSincePreviousTransitionPoint:(unsigned long long)arg3 minimumBrightness:(long long)arg4 maximumBrightness:(long long)arg5;

- (long long)colorTemperatureForBrightness:(long long)arg1;

@end
