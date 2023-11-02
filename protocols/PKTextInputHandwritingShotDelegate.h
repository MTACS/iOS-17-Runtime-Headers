
@protocol PKTextInputHandwritingShotDelegate <NSObject>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })handwritingShot:(PKTextInputHandwritingShot *)arg1 activePreviewRangeForElementRecognitionIdentifier:(NSNumber *)arg2 queryItemStableIdentifier:(NSNumber *)arg3;
- (bool)handwritingShot:(PKTextInputHandwritingShot *)arg1 hasCommittedResultsInSessionToElementRecognitionIdentifier:(NSNumber *)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })handwritingShot:(PKTextInputHandwritingShot *)arg1 inProgressGestureInitialSelectedRangeForElementRecognitionIdentifier:(NSNumber *)arg2;
- (long long)handwritingShot:(PKTextInputHandwritingShot *)arg1 lastCharacterLevelPositionForElementRecognitionIdentifier:(NSNumber *)arg2;
- (PKTextInputElement *)handwritingShot:(PKTextInputHandwritingShot *)arg1 preferredTargetElementForQueryItemStableIdentifier:(NSNumber *)arg2 simultaneousItemStableIdentifiers:(NSArray *)arg3 proposedTargetElement:(PKTextInputElement *)arg4;
- (bool)handwritingShot:(PKTextInputHandwritingShot *)arg1 shouldSuppressGesturesForStrokesBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 coordinateSpace:(id <UICoordinateSpace>)arg3;
- (void)handwritingShot:(PKTextInputHandwritingShot *)arg1 willFocusAndLoadDataForTargetElement:(PKTextInputElement *)arg2;
- (void)handwritingShotDidChangeState:(PKTextInputHandwritingShot *)arg1;
- (void)handwritingShotDidOverrideStrongCursor:(PKTextInputHandwritingShot *)arg1;
- (NSSet *)handwritingShotStrokeIdentifiersToExcludeFromRecognition:(PKTextInputHandwritingShot *)arg1;

@end
