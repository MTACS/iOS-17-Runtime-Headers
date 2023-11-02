
@interface LPVisualMediaViewConfiguration : NSObject <NSCopying> {
    bool  _allowsLoadingMediaWithAutoPlayDisabled;
    bool  _disableAutoPlay;
    bool  _disablePlayback;
    bool  _disablePlaybackControls;
    double  _fullScreenTransitionCornerRadius;
}

@property (nonatomic) bool allowsLoadingMediaWithAutoPlayDisabled;
@property (nonatomic) bool disableAutoPlay;
@property (nonatomic) bool disablePlayback;
@property (nonatomic) bool disablePlaybackControls;
@property (nonatomic) double fullScreenTransitionCornerRadius;

- (bool)allowsLoadingMediaWithAutoPlayDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableAutoPlay;
- (bool)disablePlayback;
- (bool)disablePlaybackControls;
- (double)fullScreenTransitionCornerRadius;
- (void)setAllowsLoadingMediaWithAutoPlayDisabled:(bool)arg1;
- (void)setDisableAutoPlay:(bool)arg1;
- (void)setDisablePlayback:(bool)arg1;
- (void)setDisablePlaybackControls:(bool)arg1;
- (void)setFullScreenTransitionCornerRadius:(double)arg1;

@end
