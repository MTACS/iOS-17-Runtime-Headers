
@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isOrientationLocked;
- (bool)isRingerMuted;
- (bool)isUILocked;
- (void)lockOrientation;
- (id)observeRingerMutedWithBlock:(id /* block */)arg1;
- (void)setRingerMuted:(bool)arg1 reason:(id)arg2;
- (void)unlockOrientation;

@end
