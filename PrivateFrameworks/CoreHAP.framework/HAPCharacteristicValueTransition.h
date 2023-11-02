
@interface HAPCharacteristicValueTransition : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _HAPInstanceID;
    NSData * _controllerContext;
    HAPCharacteristicValueTransitionEndBehaviorWrapper * _endBehavior;
    HAPCharacteristicValueLinearDerivedTransition * _linearDerivedTransition;
    HAPCharacteristicValueLinearTransition * _linearTransition;
    HAPTLVUnsignedNumberValue * _notifyTimeIntervalThreshold;
    NSData * _notifyValueChangeThreshold;
    HAPTLVUnsignedNumberValue * _valueUpdateTimeInterval;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *HAPInstanceID;
@property (nonatomic, retain) NSData *controllerContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPCharacteristicValueTransitionEndBehaviorWrapper *endBehavior;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPCharacteristicValueLinearDerivedTransition *linearDerivedTransition;
@property (nonatomic, retain) HAPCharacteristicValueLinearTransition *linearTransition;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *notifyTimeIntervalThreshold;
@property (nonatomic, retain) NSData *notifyValueChangeThreshold;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *valueUpdateTimeInterval;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)HAPInstanceID;
- (id)controllerContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endBehavior;
- (id)init;
- (id)initWithHAPInstanceID:(id)arg1 controllerContext:(id)arg2 endBehavior:(id)arg3 linearTransition:(id)arg4 linearDerivedTransition:(id)arg5 valueUpdateTimeInterval:(id)arg6 notifyValueChangeThreshold:(id)arg7 notifyTimeIntervalThreshold:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)linearDerivedTransition;
- (id)linearTransition;
- (id)notifyTimeIntervalThreshold;
- (id)notifyValueChangeThreshold;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setControllerContext:(id)arg1;
- (void)setEndBehavior:(id)arg1;
- (void)setHAPInstanceID:(id)arg1;
- (void)setLinearDerivedTransition:(id)arg1;
- (void)setLinearTransition:(id)arg1;
- (void)setNotifyTimeIntervalThreshold:(id)arg1;
- (void)setNotifyValueChangeThreshold:(id)arg1;
- (void)setValueUpdateTimeInterval:(id)arg1;
- (id)valueUpdateTimeInterval;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (bool)canCoalesceTransitionPoint1:(id)arg1 transitionPoint2:(id)arg2 ofCurve:(id)arg3;
+ (id)naturalLightingValueTransitionWithLightProfile:(id)arg1 naturalLightingEnabled:(bool)arg2 startDate:(id)arg3 dataSource:(id)arg4;
+ (id)transitionPointsByCoalescingTransitionPoints:(id)arg1 ofCurve:(id)arg2;
+ (bool)updateTransition:(id)arg1 withCurve:(id)arg2 brightnessCharacteristic:(id)arg3 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg4 transitionStartTimeInMilliseconds:(unsigned long long)arg5;

- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;
- (id)naturalLightingActiveTransitionContextLightProfile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (bool)canCoalesceTransitionPoint1:(id)arg1 transitionPoint2:(id)arg2 ofCurve:(id)arg3;
+ (id)naturalLightingValueTransitionWithLightProfile:(id)arg1 naturalLightingEnabled:(bool)arg2 startDate:(id)arg3 dataSource:(id)arg4;
+ (id)transitionPointsByCoalescingTransitionPoints:(id)arg1 ofCurve:(id)arg2;
+ (bool)updateTransition:(id)arg1 withCurve:(id)arg2 brightnessCharacteristic:(id)arg3 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg4 transitionStartTimeInMilliseconds:(unsigned long long)arg5;

- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;
- (id)naturalLightingActiveTransitionContextLightProfile:(id)arg1;

@end
