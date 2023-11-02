
@interface ML3MigrationMisgroupedAlbum : NSObject {
    long long  _albumArtistPID;
    long long  _albumPID;
    NSMutableArray * _misgroupedTracks;
}

@property (nonatomic, readonly) long long albumArtistPID;
@property (nonatomic, readonly) long long albumPID;
@property (nonatomic, readonly) NSArray *misgroupedTracks;

- (void).cxx_destruct;
- (void)addMisgroupedTrack:(id)arg1;
- (long long)albumArtistPID;
- (long long)albumPID;
- (id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2;
- (id)misgroupedTracks;

@end
