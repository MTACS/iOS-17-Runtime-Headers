
@interface HAPCharacteristicValueTransitionControllerContext : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _identifier;
    HAPTLVUnsignedNumberValue * _startTime;
    HAPTLVUnsignedNumberValue * _transitionChecksum;
}

@property (readonly, copy) HMDNaturalLightingActiveTransitionContext *activeTransitionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *identifier;
@property (getter=isNaturalLightingEnabled, readonly) bool naturalLightingEnabled;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *transitionChecksum;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 startTime:(id)arg2 transitionChecksum:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTransitionChecksum:(id)arg1;
- (id)startTime;
- (id)transitionChecksum;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)activeTransitionContext;
- (bool)isNaturalLightingEnabled;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)activeTransitionContext;
- (bool)isNaturalLightingEnabled;

@end
