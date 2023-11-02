
@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {
    NSSet * _audioTraits;
    bool  _isiTunesStoreStream;
    NSDictionary * _itemResponseDictionary;
    NSURL * _keyCertificateURL;
    NSNumber * _keyServerAdamID;
    NSString * _keyServerProtocolType;
    NSURL * _keyServerURL;
    NSURL * _playlistURL;
}

@property (nonatomic, readonly, copy) NSURL *alternateKeyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *alternateKeyServerURL;
@property (nonatomic, readonly, copy) NSURL *alternatePlaylistURL;
@property (nonatomic, copy) NSSet *audioTraits;
@property (getter=isiTunesStoreStream, nonatomic) bool iTunesStoreStream;
@property (nonatomic, copy) NSURL *keyCertificateURL;
@property (nonatomic, copy) NSNumber *keyServerAdamID;
@property (nonatomic, copy) NSString *keyServerProtocolType;
@property (nonatomic, copy) NSURL *keyServerURL;
@property (nonatomic, copy) NSURL *playlistURL;

- (void).cxx_destruct;
- (id)alternateKeyCertificateURL;
- (id)alternateKeyServerURL;
- (id)alternatePlaylistURL;
- (id)audioTraits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithItemResponseDictionary:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerAdamID;
- (id)keyServerProtocolType;
- (id)keyServerURL;
- (id)playlistURL;
- (void)setAudioTraits:(id)arg1;
- (void)setITunesStoreStream:(bool)arg1;
- (void)setKeyCertificateURL:(id)arg1;
- (void)setKeyServerAdamID:(id)arg1;
- (void)setKeyServerProtocolType:(id)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setPlaylistURL:(id)arg1;

@end
