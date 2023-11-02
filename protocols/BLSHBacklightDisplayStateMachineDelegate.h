
@protocol BLSHBacklightDisplayStateMachineDelegate <NSObject>

@required

- (void)displayState:(BLSHBacklightDisplayStateMachine *)arg1 didUpdateToBrightnessCurve:(long long)arg2;
- (void)displayState:(BLSHBacklightDisplayStateMachine *)arg1 didUpdateToMode:(long long)arg2;
- (bool)hasEnsureFlipbookCurrent;

@end
