
@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    int  _SecCMSError;
    struct SecCmsEncoderStr { } * _encoder;
    struct SecCmsMessageStr { } * _message;
    NSMutableData * _singleShot;
}

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;

@end
