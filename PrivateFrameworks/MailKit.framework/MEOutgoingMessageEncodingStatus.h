
@interface MEOutgoingMessageEncodingStatus : NSObject <NSSecureCoding> {
    NSArray * _addressesFailingEncryption;
    bool  _canEncrypt;
    bool  _canSign;
    NSError * _securityError;
}

@property (nonatomic, readonly, copy) NSArray *addressesFailingEncryption;
@property (nonatomic, readonly) bool canEncrypt;
@property (nonatomic, readonly) bool canSign;
@property (nonatomic, readonly, copy) NSError *securityError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressesFailingEncryption;
- (bool)canEncrypt;
- (bool)canSign;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCanSign:(bool)arg1 canEncrypt:(bool)arg2 securityError:(id)arg3 addressesFailingEncryption:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)securityError;

@end
