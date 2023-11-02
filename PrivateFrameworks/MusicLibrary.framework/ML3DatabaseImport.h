
@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSData * _albumArtistData;
    NSData * _albumData;
    NSObject<OS_tcc_identity> * _clientIdentity;
    NSFileHandle * _fileHandle;
    unsigned int  _homeSharingBasePlaylistID;
    bool  _isServerImport;
    NSString * _libraryPath;
    bool  _pairedDeviceCanProcessStandaloneCollections;
    bool  _pendingMatch;
    NSData * _playlistData;
    bool  _playlistsAreLibraryOwnedContent;
    long long  _preferredVideoQuality;
    bool  _resetSync;
    bool  _sagaEnabled;
    long long  _storeAccountID;
    bool  _suspendable;
    NSString * _syncAnchor;
    NSString * _syncLibraryID;
    NSData * _trackData;
    bool  _tracksAreLibraryOwnedContent;
}

@property (nonatomic, readonly) NSData *albumArtistData;
@property (nonatomic, readonly) NSData *albumData;
@property (nonatomic, readonly) NSObject<OS_tcc_identity> *clientIdentity;
@property (nonatomic, readonly) NSFileHandle *fileHandle;
@property (nonatomic, readonly) unsigned int homeSharingBasePlaylistID;
@property (nonatomic, readonly) bool isServerImport;
@property (nonatomic, readonly) NSString *libraryPath;
@property (nonatomic, readonly) bool pairedDeviceCanProcessStandaloneCollections;
@property (getter=isPendingMatch, nonatomic, readonly) bool pendingMatch;
@property (nonatomic, readonly) NSData *playlistData;
@property (nonatomic, readonly) bool playlistsAreLibraryOwnedContent;
@property (nonatomic, readonly) long long preferredVideoQuality;
@property (getter=isResetSync, nonatomic, readonly) bool resetSync;
@property (getter=isSagaEnabled, nonatomic, readonly) bool sagaEnabled;
@property (nonatomic, readonly) long long storeAccountID;
@property (getter=isSuspendable, nonatomic, readonly) bool suspendable;
@property (nonatomic, readonly) NSString *syncAnchor;
@property (nonatomic, readonly) NSString *syncLibraryID;
@property (nonatomic, readonly) NSData *trackData;
@property (nonatomic, readonly) bool tracksAreLibraryOwnedContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)albumArtistData;
- (id)albumData;
- (id)clientIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (unsigned int)homeSharingBasePlaylistID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3 albumArtistData:(id)arg4 albumData:(id)arg5 clientIdentity:(id)arg6;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3 clientIdentity:(id)arg4;
- (bool)isPendingMatch;
- (bool)isResetSync;
- (bool)isSagaEnabled;
- (bool)isServerImport;
- (bool)isSuspendable;
- (id)libraryPath;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)pairedDeviceCanProcessStandaloneCollections;
- (id)playlistData;
- (bool)playlistsAreLibraryOwnedContent;
- (long long)preferredVideoQuality;
- (long long)storeAccountID;
- (id)syncAnchor;
- (id)syncLibraryID;
- (id)trackData;
- (bool)tracksAreLibraryOwnedContent;

@end
