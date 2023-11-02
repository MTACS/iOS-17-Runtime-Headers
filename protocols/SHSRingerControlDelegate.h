
@protocol SHSRingerControlDelegate <NSObject>

@required

- (void)ringerControl:(SHSRingerControl *)arg1 volumeValueDidChange:(float)arg2;
- (void)ringerControlDidObserveEffectiveSystemVolumeChange:(SHSRingerControl *)arg1;

@end
