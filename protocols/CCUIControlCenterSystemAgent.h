
@protocol CCUIControlCenterSystemAgent <NSObject>

@required

- (bool)isOrientationLocked;
- (bool)isRingerMuted;
- (bool)isUILocked;
- (void)lockOrientation;
- (<BSInvalidatable> *)observeRingerMutedWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setRingerMuted:(bool)arg1 reason:(NSString *)arg2;
- (void)unlockOrientation;

@end
