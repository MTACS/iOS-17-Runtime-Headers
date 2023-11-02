
@interface HAPCharacteristicValueTransitionState : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _activeTransitionContexts;
}

@property (nonatomic, retain) NSMutableArray *activeTransitionContexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, readonly) bool valid;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)activeTransitionContexts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithActiveTransitionContexts:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setActiveTransitionContexts:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)isNaturalLightingEnabledForCharacteristic:(id)arg1;
- (bool)isValid;
- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (bool)isNaturalLightingEnabledForCharacteristic:(id)arg1;
- (bool)isValid;
- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;

@end
