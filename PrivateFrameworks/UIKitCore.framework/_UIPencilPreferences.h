
@interface _UIPencilPreferences : NSObject {
    bool  _cachedHasSeenPencilPairingUI;
    bool  _cachedHasUsedPassivePencil;
    long long  _cachedPreferredTapAction;
    bool  _cachedPrefersPencilOnlyDrawing;
}

+ (bool)hasSeenPencilPairingUI;
+ (bool)hasUsedPassivePencil;
+ (long long)preferredTapAction;
+ (bool)prefersPencilOnlyDrawing;
+ (void)setHasUsedPassivePencil:(bool)arg1;
+ (void)setPrefersPencilOnlyDrawing:(bool)arg1;
+ (id)sharedPreferences;

- (bool)_hasSeenPencilPairingUI;
- (void)_hasSeenPencilPairingUIDidChange;
- (bool)_hasUsedPassivePencil;
- (void)_hasUsedPassivePencilDidChange;
- (long long)_preferredTapAction;
- (void)_preferredTapActionDidChange;
- (bool)_prefersPencilOnlyDrawing;
- (void)_prefersPencilOnlyDrawingDidChange;
- (void)_setHasUsedPassivePencil:(bool)arg1;
- (void)_setPrefersPencilOnlyDrawing:(bool)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
