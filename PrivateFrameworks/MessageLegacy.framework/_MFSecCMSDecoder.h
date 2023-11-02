
@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    int  _SecCMSError;
    struct SecCmsDigestContextStr { } * _digest;
    struct SecCmsEnvelopedDataStr { } * _envelopedData;
    bool  _isEncrypted;
    struct SecCmsMessageStr { } * _message;
    struct SecCmsSignedDataStr { } * _signedData;
    NSArray * _signers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;

@end
