
@interface ASCPublicKeyCredentialDescriptor : NSObject <NSSecureCoding> {
    NSData * _credentialID;
    NSArray * _transports;
}

@property (nonatomic, readonly) NSData *credentialID;
@property (nonatomic, readonly) bool hasCABLETransport;
@property (nonatomic, readonly) bool hasInternalTransport;
@property (nonatomic, readonly) NSArray *transports;

+ (id)cableTransports;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCABLETransport;
- (bool)hasInternalTransport;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialID:(id)arg1 transports:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)transports;

@end
