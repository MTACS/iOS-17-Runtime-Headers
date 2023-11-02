
@interface SREMusicMetadata : NSObject {
    long long  adamID;
    long long  albumAdamID;
    long long  artistAdamID;
    NSString * genreID;
}

@property (nonatomic) long long adamID;
@property (nonatomic) long long albumAdamID;
@property (nonatomic) long long artistAdamID;
@property (nonatomic, retain) NSString *genreID;

- (void).cxx_destruct;
- (long long)adamID;
- (long long)albumAdamID;
- (long long)artistAdamID;
- (id)genreID;
- (id)init;
- (void)setAdamID:(long long)arg1;
- (void)setAlbumAdamID:(long long)arg1;
- (void)setArtistAdamID:(long long)arg1;
- (void)setGenreID:(id)arg1;

@end
