
@interface MPStoreHLSAssetInfo : NSObject {
    ICStoreHLSAssetInfo * _internalInfo;
}

@property (nonatomic, readonly, copy) NSURL *alternateKeyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *alternateKeyServerURL;
@property (nonatomic, readonly, copy) NSURL *alternatePlaylistURL;
@property (getter=isiTunesStoreStream, nonatomic, readonly) bool iTunesStoreStream;
@property (nonatomic, readonly, copy) NSURL *keyCertificateURL;
@property (nonatomic, readonly, copy) NSNumber *keyServerAdamID;
@property (nonatomic, readonly, copy) NSString *keyServerProtocolType;
@property (nonatomic, readonly, copy) NSURL *keyServerURL;
@property (nonatomic, readonly, copy) NSURL *playlistURL;

- (void).cxx_destruct;
- (id)alternateKeyCertificateURL;
- (id)alternateKeyServerURL;
- (id)alternatePlaylistURL;
- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerAdamID;
- (id)keyServerProtocolType;
- (id)keyServerURL;
- (id)playlistURL;

@end
