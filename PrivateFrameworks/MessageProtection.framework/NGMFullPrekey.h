
@interface NGMFullPrekey : NSObject {
    DHKey * _dhKey;
    NGMECDHPublicPreKey * _publicPrekey;
}

@property (nonatomic, readonly) DHKey *dhKey;
@property (nonatomic, readonly) NGMECDHPublicPreKey *publicPrekey;

+ (id)fullPrekeyForTestingSignedBy:(id)arg1;

- (void).cxx_destruct;
- (bool)delete;
- (id)description;
- (id)dhKey;
- (id)ecdhKeyCTKObject;
- (id)initWithPBPrekey:(id)arg1 verifySignedBy:(id)arg2 error:(id*)arg3;
- (id)initWithPrekeySignedBy:(id)arg1 error:(id*)arg2;
- (id)pbDevicePrekey;
- (id)publicPrekey;

@end
