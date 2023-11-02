
@protocol SBFScreenWakeAnimationTarget <NSObject>

@required

- (void)removeAllWakeEffects;
- (void)updateWakeEffectsForWake:(bool)arg1;
- (void)updateWakeEffectsForWake:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
