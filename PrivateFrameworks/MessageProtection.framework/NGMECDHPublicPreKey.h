
@interface NGMECDHPublicPreKey : NSObject {
    DHPublicKey * _dhKey;
    NSData * _signature;
    double  _timestamp;
}

@property (nonatomic, readonly) DHPublicKey *dhKey;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)description;
- (id)dhKey;
- (id)initRemotePrekeyWithPublicPrekeyPB:(id)arg1 signedBy:(id)arg2 error:(id*)arg3;
- (id)initWithPublicKey:(id)arg1 signature:(id)arg2 timestamp:(double)arg3;
- (bool)isValidlySignedBy:(id)arg1 error:(id*)arg2;
- (id)signature;
- (double)timestamp;

@end
