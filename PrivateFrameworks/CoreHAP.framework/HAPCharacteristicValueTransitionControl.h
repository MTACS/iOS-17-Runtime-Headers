
@interface HAPCharacteristicValueTransitionControl : NSObject <HAPTLVProtocol, NSCopying> {
    HAPCharacteristicValueTransitionFetch * _transitionFetch;
    HAPCharacteristicValueTransitionStart * _transitionStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPCharacteristicValueTransitionFetch *transitionFetch;
@property (nonatomic, retain) HAPCharacteristicValueTransitionStart *transitionStart;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTransitionFetch:(id)arg1 transitionStart:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setTransitionFetch:(id)arg1;
- (void)setTransitionStart:(id)arg1;
- (id)transitionFetch;
- (id)transitionStart;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;
- (id)naturalLightingEnabledForCharacteristic:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;
- (id)naturalLightingEnabledForCharacteristic:(id)arg1;

@end
