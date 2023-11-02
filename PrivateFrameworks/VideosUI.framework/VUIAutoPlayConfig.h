
@interface VUIAutoPlayConfig : NSObject {
    double  _autoPlayDelayInterval;
    bool  _autoPlayVideoSound;
    bool  _disableBackgroundMediaPlayback;
}

@property (nonatomic) double autoPlayDelayInterval;
@property (nonatomic) bool autoPlayVideoSound;
@property (nonatomic, readonly) bool disableBackgroundMediaPlayback;

- (double)autoPlayDelayInterval;
- (bool)autoPlayVideoSound;
- (bool)disableBackgroundMediaPlayback;
- (id)init;
- (void)setAutoPlayDelayInterval:(double)arg1;
- (void)setAutoPlayVideoSound:(bool)arg1;

@end
