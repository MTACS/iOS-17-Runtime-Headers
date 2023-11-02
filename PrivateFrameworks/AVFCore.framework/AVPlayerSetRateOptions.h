
@interface AVPlayerSetRateOptions : NSObject <NSCopying> {
    bool  _preferCoordinatedPlaybackBehavior;
}

@property (nonatomic) bool preferCoordinatedPlaybackBehavior;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)preferCoordinatedPlaybackBehavior;
- (void)setPreferCoordinatedPlaybackBehavior:(bool)arg1;

@end
