
@protocol SBRingerNoticeUICoordinating <NSObject>

@required

- (void)buttonReleased;
- (bool)isPresented;
- (bool)isRingerSilent;
- (void)nudgeUp:(bool)arg1;
- (void)presentForMuteChange:(bool)arg1;
- (void)setRingerSilent:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 animated:(bool)arg2 forKeyPress:(bool)arg3;
- (float)volume;

@end
