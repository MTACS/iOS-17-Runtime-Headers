
@protocol PXGAXInfoSource <NSObject>

@required

- (<PXGAXInfo> *)axContentInfoAtSpriteIndex:(unsigned int)arg1;
- (void)axDidReceiveFocusMovementHint:(UIFocusMovementHint *)arg1 forSpriteAtIndex:(unsigned int)arg2;
- (void)axDidUpdateFocusFromSpriteAtIndex:(unsigned int)arg1 toSpriteAtIndex:(unsigned int)arg2;
- (void)axDidUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)arg1;
- (NSIndexSet *)axSelectedSpriteIndexes;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (NSIndexSet *)axSpriteIndexes;
- (NSIndexSet *)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSIndexSet *)axVisibleSpriteIndexes;

@end
