
@protocol NSCoreTypesetterDelegate <NSObject>

@optional

- (unsigned long long)coreTypesetter:(NSCoreTypesetter *)arg1 indexToBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2 proposedIndex:(unsigned long long)arg3;
- (bool)coreTypesetter:(NSCoreTypesetter *)arg1 isSimpleRectangularTextContainerForStartingCharacterAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coreTypesetter:(NSCoreTypesetter *)arg1 lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atIndex:(long long)arg3 writingDirection:(long long)arg4 remainingRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;

@end
