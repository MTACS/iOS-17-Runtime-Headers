
@protocol MKFMediaPlaybackAction <MKFAction, MKFMediaPlaybackActionPublicExtensions>

@required

- (NSArray *)accessories;
- (void)addAccessoriesObject:(id <MKFAccessory>)arg1;
- (MKFMediaPlaybackActionDatabaseID *)databaseID;
- (MPPlaybackArchive *)encodedPlaybackArchive;
- (<MKFHome> *)home;
- (void)removeAccessoriesObject:(id <MKFAccessory>)arg1;
- (void)setEncodedPlaybackArchive:(MPPlaybackArchive *)arg1;
- (void)setState:(NSNumber *)arg1;
- (void)setVolume:(NSNumber *)arg1;
- (NSNumber *)state;
- (NSNumber *)volume;

@end
