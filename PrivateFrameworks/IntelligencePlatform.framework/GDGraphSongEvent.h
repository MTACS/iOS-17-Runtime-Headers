
@interface GDGraphSongEvent : NSObject <GDGraphObject> {
    NSArray * _allDate;
    NSArray * _allPlaybackState;
    NSArray * _allSong;
    GDGraphDateRelationship * _date;
    GDGraphSongEventEntityIdentifier * _entityIdentifier;
    NSString * _playbackState;
    GDGraphSongRelationship * _song;
}

@property (nonatomic, readonly, copy) NSArray *allDate;
@property (nonatomic, readonly, copy) NSArray *allPlaybackState;
@property (nonatomic, readonly, copy) NSArray *allSong;
@property (nonatomic, readonly, copy) GDGraphDateRelationship *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphSongEventEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *playbackState;
@property (nonatomic, readonly, copy) GDGraphSongRelationship *song;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allDate;
- (id)allPlaybackState;
- (id)allSong;
- (id)date;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 dateField:(id)arg2 playbackStateField:(id)arg3 songField:(id)arg4 allDateField:(id)arg5 allPlaybackStateField:(id)arg6 allSongField:(id)arg7;
- (id)playbackState;
- (id)song;

@end
