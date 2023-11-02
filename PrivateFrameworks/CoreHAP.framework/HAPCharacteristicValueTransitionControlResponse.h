
@interface HAPCharacteristicValueTransitionControlResponse : NSObject <HAPTLVProtocol, NSCopying> {
    HAPCharacteristicValueTransitionState * _transitionState;
    HAPCharacteristicValueTransition * _valueTransition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPCharacteristicValueTransitionState *transitionState;
@property (nonatomic, retain) HAPCharacteristicValueTransition *valueTransition;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithValueTransition:(id)arg1 transitionState:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setTransitionState:(id)arg1;
- (void)setValueTransition:(id)arg1;
- (id)transitionState;
- (id)valueTransition;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)isNaturalLightingEnabledForCharacteristic:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (bool)isNaturalLightingEnabledForCharacteristic:(id)arg1;

@end
