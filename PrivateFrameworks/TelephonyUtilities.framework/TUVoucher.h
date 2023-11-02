
@interface TUVoucher : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptedData;
    TUHandle * _handle;
    NSString * _tokenPrefixedURI;
    NSData * _unsafeData;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSData *encryptedData;
@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *tokenPrefixedURI;
@property (nonatomic, readonly, copy) NSData *unsafeData;

+ (bool)supportsSecureCoding;
+ (id)voucherFromMessagingData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 tokenPrefixedURI:(id)arg2 data:(id)arg3 encryptedData:(id)arg4;
- (id)initWithVoucher:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVoucher:(id)arg1;
- (id)messagingData;
- (id)tokenPrefixedURI;
- (id)unsafeData;

@end
