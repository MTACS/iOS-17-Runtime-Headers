
@interface ICMutablePlayActivityEventContainerIDs : ICPlayActivityEventContainerIDs

@property (nonatomic) long long adamID;
@property (nonatomic, copy) NSString *cloudAlbumID;
@property (nonatomic) unsigned long long cloudPlaylistID;
@property (nonatomic, copy) NSString *globalPlaylistID;
@property (nonatomic, copy) NSString *playlistVersionHash;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationStringID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setCloudAlbumID:(id)arg1;
- (void)setCloudPlaylistID:(unsigned long long)arg1;
- (void)setGlobalPlaylistID:(id)arg1;
- (void)setPlaylistVersionHash:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;

@end
