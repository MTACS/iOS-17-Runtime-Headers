
@interface MPStoreRadioStreamAssetInfo : NSObject {
    bool  _iTunesStoreStream;
    ICStoreRadioStreamAssetInfo * _internalInfo;
}

@property (nonatomic, readonly) long long flavor;
@property (getter=isiTunesStoreStream, nonatomic) bool iTunesStoreStream;
@property (nonatomic, readonly, copy) NSURL *keyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *keyServerURL;
@property (nonatomic, readonly) long long streamProtocol;
@property (nonatomic, readonly, copy) NSURL *streamURL;

- (void).cxx_destruct;
- (long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1;
- (long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1;
- (long long)flavor;
- (id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1;
- (bool)isITunesStoreStream;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (void)setITunesStoreStream:(bool)arg1;
- (long long)streamProtocol;
- (id)streamURL;

@end
