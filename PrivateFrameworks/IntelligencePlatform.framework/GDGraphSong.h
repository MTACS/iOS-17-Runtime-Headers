
@interface GDGraphSong : NSObject <GDGraphObject> {
    NSString * _albumAdamId;
    NSString * _albumName;
    NSArray * _allAlbumAdamId;
    NSArray * _allAlbumName;
    NSArray * _allArtistAdamId;
    NSArray * _allArtistName;
    NSArray * _allDuration;
    NSArray * _allGenre;
    NSArray * _allName;
    NSArray * _allSongAdamId;
    NSString * _artistAdamId;
    NSString * _artistName;
    GDGraphQuantityRelationship * _duration;
    GDGraphSongEntityIdentifier * _entityIdentifier;
    NSString * _genre;
    NSArray * _identifiers;
    NSString * _name;
    NSString * _songAdamId;
}

@property (nonatomic, readonly, copy) NSString *albumAdamId;
@property (nonatomic, readonly, copy) NSString *albumName;
@property (nonatomic, readonly, copy) NSArray *allAlbumAdamId;
@property (nonatomic, readonly, copy) NSArray *allAlbumName;
@property (nonatomic, readonly, copy) NSArray *allArtistAdamId;
@property (nonatomic, readonly, copy) NSArray *allArtistName;
@property (nonatomic, readonly, copy) NSArray *allDuration;
@property (nonatomic, readonly, copy) NSArray *allGenre;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *allSongAdamId;
@property (nonatomic, readonly, copy) NSString *artistAdamId;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphQuantityRelationship *duration;
@property (nonatomic, readonly, copy) GDGraphSongEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) NSString *genre;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *songAdamId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)albumAdamId;
- (id)albumName;
- (id)allAlbumAdamId;
- (id)allAlbumName;
- (id)allArtistAdamId;
- (id)allArtistName;
- (id)allDuration;
- (id)allGenre;
- (id)allName;
- (id)allSongAdamId;
- (id)artistAdamId;
- (id)artistName;
- (id)duration;
- (id)entityIdentifier;
- (id)genre;
- (Class)graphObjectType;
- (id)identifiers;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 artistNameField:(id)arg3 albumNameField:(id)arg4 genreField:(id)arg5 durationField:(id)arg6 identifiersField:(id)arg7 songAdamIdField:(id)arg8 albumAdamIdField:(id)arg9 artistAdamIdField:(id)arg10 allNameField:(id)arg11 allArtistNameField:(id)arg12 allAlbumNameField:(id)arg13 allGenreField:(id)arg14 allDurationField:(id)arg15 allSongAdamIdField:(id)arg16 allAlbumAdamIdField:(id)arg17 allArtistAdamIdField:(id)arg18;
- (id)name;
- (id)songAdamId;

@end
