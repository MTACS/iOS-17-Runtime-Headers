
@protocol HMAudioControlDelegate <NSObject>

@optional

- (void)audioControl:(HMAudioControl *)arg1 didUpdateMuted:(bool)arg2;
- (void)audioControl:(HMAudioControl *)arg1 didUpdateVolume:(float)arg2;

@end
