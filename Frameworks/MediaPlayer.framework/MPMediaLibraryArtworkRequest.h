
@interface MPMediaLibraryArtworkRequest : NSObject <MPArtworkTokenParametersRepresenting> {
    long long  _artworkType;
    NSString * _availableArtworkToken;
    long long  _entityType;
    NSNumber * _fetchableArtworkSource;
    NSString * _fetchableArtworkToken;
    bool  _hasRetrievedTokens;
    MPMediaLibrary * _library;
    MPMediaLibraryArtwork * _libraryArtwork;
    unsigned long long  _libraryID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _mediaType;
    double  _retrievalTime;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) long long artworkType;
@property (nonatomic, copy) NSString *availableArtworkToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, copy) NSNumber *fetchableArtworkSource;
@property (nonatomic, copy) NSString *fetchableArtworkToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPMediaLibrary *library;
@property (nonatomic, readonly) MPMediaLibraryArtwork *libraryArtwork;
@property (nonatomic, readonly) unsigned long long libraryID;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) ML3MusicLibrary *musicLibrary;
@property (nonatomic) double retrievalTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) ICUserIdentity *userIdentity;

+ (id)artworkTokenWithParameters:(id)arg1;

- (void).cxx_destruct;
- (id)_onQueue_musicLibrary;
- (void)_onQueue_updateTokens;
- (id)artworkTokenParameters;
- (long long)artworkType;
- (id)availableArtworkToken;
- (void)clearFailedFetchableToken;
- (id)description;
- (long long)entityType;
- (id)fetchableArtworkSource;
- (id)fetchableArtworkToken;
- (unsigned long long)hash;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)library;
- (id)libraryArtwork;
- (unsigned long long)libraryID;
- (unsigned long long)mediaType;
- (id)musicLibrary;
- (void)promoteFetchableArtworkTokenIfNeeded;
- (double)retrievalTime;
- (void)setAvailableArtworkToken:(id)arg1;
- (void)setFetchableArtworkSource:(id)arg1;
- (void)setFetchableArtworkToken:(id)arg1;
- (void)setLibraryArtwork:(id)arg1;
- (void)setRetrievalTime:(double)arg1;
- (id)userIdentity;

@end
