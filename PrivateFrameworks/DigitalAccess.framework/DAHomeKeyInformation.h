
@interface DAHomeKeyInformation : NSObject {
    NSData * _appletIdentifier;
    NSData * _publicKey;
    NSData * _readerIdentifier;
}

@property (readonly) NSData *appletIdentifier;
@property (readonly) NSData *publicKey;
@property (readonly) NSData *readerIdentifier;

+ (bool)supportsSecureCoding;
+ (id)withEndpoint:(id)arg1;

- (void).cxx_destruct;
- (id)appletIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publicKey;
- (id)readerIdentifier;

@end
