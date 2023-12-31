
@interface MRCryptoPairingMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *pairingData;
@property (getter=isRetrying, nonatomic, readonly) bool retrying;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) int status;
@property (getter=isUsingSystemPairing, nonatomic, readonly) bool usingSystemPairing;

- (unsigned long long)encryptionType;
- (id)initWithPairingData:(id)arg1 status:(int)arg2;
- (id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(bool)arg3 isUsingSystemPairing:(bool)arg4 state:(unsigned long long)arg5;
- (bool)isRetrying;
- (bool)isUsingSystemPairing;
- (id)pairingData;
- (unsigned long long)state;
- (int)status;
- (unsigned long long)type;

@end
