
@interface CSDMessagingVoucher : PBCodable <NSCopying> {
    NSData * _encryptedData;
    CSDMessagingHandle * _handle;
    NSString * _tokenPrefixedURI;
    NSData * _unsafeData;
}

@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic, retain) CSDMessagingHandle *handle;
@property (nonatomic, readonly) bool hasEncryptedData;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasTokenPrefixedURI;
@property (nonatomic, readonly) bool hasUnsafeData;
@property (nonatomic, retain) NSString *tokenPrefixedURI;
@property (nonatomic, readonly) TUVoucher *tuVoucher;
@property (nonatomic, retain) NSData *unsafeData;

+ (id)voucherWithTUVoucher:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedData;
- (id)handle;
- (bool)hasEncryptedData;
- (bool)hasHandle;
- (bool)hasTokenPrefixedURI;
- (bool)hasUnsafeData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setTokenPrefixedURI:(id)arg1;
- (void)setUnsafeData:(id)arg1;
- (id)tokenPrefixedURI;
- (id)tuVoucher;
- (id)unsafeData;
- (void)writeTo:(id)arg1;

@end
