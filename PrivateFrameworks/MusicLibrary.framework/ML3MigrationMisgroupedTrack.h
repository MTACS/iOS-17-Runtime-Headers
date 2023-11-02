
@interface ML3MigrationMisgroupedTrack : NSObject {
    long long  _albumArtistPID;
    long long  _persistentID;
}

@property (nonatomic, readonly) long long albumArtistPID;
@property (nonatomic, readonly) long long persistentID;

- (long long)albumArtistPID;
- (id)initWithPersistentID:(long long)arg1 albumArtistPID:(long long)arg2;
- (long long)persistentID;

@end
