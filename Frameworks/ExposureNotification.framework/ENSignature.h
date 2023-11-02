
@interface ENSignature : NSObject <CUXPCCodable> {
    NSString * _androidBundleID;
    NSString * _appleBundleID;
    unsigned int  _batchCount;
    unsigned int  _batchNumber;
    NSString * _keyID;
    NSString * _keyVersion;
    NSString * _signatureAlgorithm;
    NSData * _signatureData;
}

@property (nonatomic, copy) NSString *androidBundleID;
@property (nonatomic, copy) NSString *appleBundleID;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned int batchNumber;
@property (nonatomic, copy) NSString *keyID;
@property (nonatomic, copy) NSString *keyVersion;
@property (nonatomic, copy) NSString *signatureAlgorithm;
@property (nonatomic, copy) NSData *signatureData;

- (void).cxx_destruct;
- (bool)_encodeInfoWithProtobufCoder:(id)arg1 error:(id*)arg2;
- (bool)_readSignatureInfoPtr:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)androidBundleID;
- (id)appleBundleID;
- (unsigned int)batchCount;
- (unsigned int)batchNumber;
- (id)description;
- (bool)encodeWithProtobufCoder:(id)arg1 error:(id*)arg2;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)keyID;
- (id)keyVersion;
- (void)setAndroidBundleID:(id)arg1;
- (void)setAppleBundleID:(id)arg1;
- (void)setBatchCount:(unsigned int)arg1;
- (void)setBatchNumber:(unsigned int)arg1;
- (void)setKeyID:(id)arg1;
- (void)setKeyVersion:(id)arg1;
- (void)setSignatureAlgorithm:(id)arg1;
- (void)setSignatureData:(id)arg1;
- (id)signatureAlgorithm;
- (id)signatureData;

@end
