
@interface SREMusicCandidate : NSObject {
    NSString * _artistName;
    NSString * _artworkURL;
    long long  _collectionId;
    NSString * _collectionName;
    NSArray * _genreIDs;
    unsigned char  _trackExplicitness;
    long long  _trackId;
    NSString * _trackName;
    long long  _trackTimeMillis;
}

@property (nonatomic, retain) NSString *artistName;
@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic) long long collectionId;
@property (nonatomic, retain) NSString *collectionName;
@property (nonatomic, retain) NSArray *genreIDs;
@property (nonatomic) unsigned char trackExplicitness;
@property (nonatomic) long long trackId;
@property (nonatomic, retain) NSString *trackName;
@property (nonatomic) long long trackTimeMillis;

- (void).cxx_destruct;
- (id)artistName;
- (id)artworkURL;
- (long long)collectionId;
- (id)collectionName;
- (id)debugString;
- (id)genreIDs;
- (id)genresDebugString;
- (id)init;
- (void)setArtistName:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setCollectionId:(long long)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setGenreIDs:(id)arg1;
- (void)setTrackExplicitness:(unsigned char)arg1;
- (void)setTrackId:(long long)arg1;
- (void)setTrackName:(id)arg1;
- (void)setTrackTimeMillis:(long long)arg1;
- (unsigned char)trackExplicitness;
- (long long)trackId;
- (id)trackName;
- (long long)trackTimeMillis;

@end
