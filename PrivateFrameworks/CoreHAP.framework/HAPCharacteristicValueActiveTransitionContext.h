
@interface HAPCharacteristicValueActiveTransitionContext : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _HAPInstanceID;
    NSData * _controllerContext;
    HAPTLVUnsignedNumberValue * _timeElapsedSinceStart;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *HAPInstanceID;
@property (nonatomic, retain) NSData *controllerContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *timeElapsedSinceStart;
@property (getter=isValid, readonly) bool valid;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)HAPInstanceID;
- (id)controllerContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithHAPInstanceID:(id)arg1 controllerContext:(id)arg2 timeElapsedSinceStart:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setControllerContext:(id)arg1;
- (void)setHAPInstanceID:(id)arg1;
- (void)setTimeElapsedSinceStart:(id)arg1;
- (id)timeElapsedSinceStart;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)isValid;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (bool)isValid;

@end
