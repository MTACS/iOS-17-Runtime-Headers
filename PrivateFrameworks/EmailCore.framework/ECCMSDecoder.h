
@interface ECCMSDecoder : NSObject {
    MSCMSContentInfo * _contentInfo;
    NSData * _detachedContentData;
}

@property (nonatomic, readonly) NSData *decryptedContentData;
@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) bool isSigned;

+ (id)decoderForEncodedData:(id)arg1 detachedContentData:(id)arg2 outError:(id*)arg3;
+ (id)decoderForEncodedData:(id)arg1 outError:(id*)arg2;

- (void).cxx_destruct;
- (id)decryptedContentData;
- (id)extractSignatureInfoAndSignedData:(id*)arg1 outError:(id*)arg2;
- (id)initWithContentInfo:(id)arg1 detachedContentData:(id)arg2;
- (bool)isEncrypted;
- (bool)isSigned;

@end
