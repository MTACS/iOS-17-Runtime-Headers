
@interface PPMediaPlayerResponse : NSObject {
    NSString * _album;
    NSString * _artist;
    NSString * _bundleID;
    double  _duration;
    NSString * _playerID;
    unsigned int  _state;
    NSNumber * _storeItemID;
    NSString * _title;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic) unsigned int state;
@property (nonatomic, retain) NSNumber *storeItemID;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)bundleID;
- (double)duration;
- (bool)isEqualToResponse:(id)arg1;
- (id)playerID;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStoreItemID:(id)arg1;
- (void)setTitle:(id)arg1;
- (unsigned int)state;
- (id)storeItemID;
- (id)title;

@end
