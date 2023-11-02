
@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding> {
    bool  _registerBroker;
    bool  _registerPeerPayment;
}

@property (nonatomic) bool registerBroker;
@property (nonatomic) bool registerPeerPayment;

+ (id)remoteRegistrationRequestWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteRegistrationRequest:(id)arg1;
- (id)protobuf;
- (bool)registerBroker;
- (bool)registerPeerPayment;
- (void)setRegisterBroker:(bool)arg1;
- (void)setRegisterPeerPayment:(bool)arg1;

@end
