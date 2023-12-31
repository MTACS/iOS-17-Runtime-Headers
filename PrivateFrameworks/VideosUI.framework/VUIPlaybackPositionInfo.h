
@interface VUIPlaybackPositionInfo : NSObject <NSCopying> {
    NSNumber * _bookmarkTime;
    NSNumber * _hasBeenPlayed;
    NSNumber * _playCount;
}

@property (nonatomic, retain) NSNumber *bookmarkTime;
@property (nonatomic, retain) NSNumber *hasBeenPlayed;
@property (nonatomic, retain) NSNumber *playCount;

- (void).cxx_destruct;
- (id)bookmarkTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hasBeenPlayed;
- (id)playCount;
- (void)setBookmarkTime:(id)arg1;
- (void)setHasBeenPlayed:(id)arg1;
- (void)setPlayCount:(id)arg1;

@end
