
@interface MPServerObjectDatabaseHLSAsset : NSObject {
    NSString * _hashedPersonID;
    bool  _iTunesStoreStream;
    NSString * _identifier;
    NSURL * _keyCertificateURL;
    NSNumber * _keyServerAdamID;
    NSString * _keyServerProtocolType;
    NSURL * _keyServerURL;
    NSURL * _playlistURL;
}

@property (nonatomic, readonly, copy) NSString *hashedPersonID;
@property (getter=isiTunesStoreStream, nonatomic, readonly) bool iTunesStoreStream;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSURL *keyCertificateURL;
@property (nonatomic, readonly, copy) NSNumber *keyServerAdamID;
@property (nonatomic, readonly, copy) NSString *keyServerProtocolType;
@property (nonatomic, readonly, copy) NSURL *keyServerURL;
@property (nonatomic, readonly, copy) NSURL *playlistURL;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 hashedPersonID:(id)arg2 playlistURL:(id)arg3 keyCertificateURL:(id)arg4 keyServerURL:(id)arg5 keyServerAdamID:(id)arg6 keyServerProtocolType:(id)arg7 isiTunesStoreStream:(bool)arg8;
- (id)hashedPersonID;
- (id)identifier;
- (id)initWithSQLRowResult:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerAdamID;
- (id)keyServerProtocolType;
- (id)keyServerURL;
- (id)playlistURL;

@end
