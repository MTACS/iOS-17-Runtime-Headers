
@protocol _HMAudioControlDelegate <NSObject>

@required

- (void)audioControl:(_HMAudioControl *)arg1 didUpdateMuted:(bool)arg2;
- (void)audioControl:(_HMAudioControl *)arg1 didUpdateVolume:(float)arg2;

@end
