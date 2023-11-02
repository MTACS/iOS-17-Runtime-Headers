
@protocol CHStroke <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (CHEncodedStrokeIdentifier *)encodedStrokeIdentifier;
- (double)endTimestamp;
- (void)enumeratePointsWithDistanceStep:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGPoint { double x1; double x2; }, double, bool*, void*
- (void)enumeratePointsWithTimestep:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGPoint { double x1; double x2; }, double, bool*, void*
- (bool)isFinished;
- (double)startTimestamp;
- (unsigned long long)strokeAttributes;
- (<CHStrokeIdentifier> *)strokeIdentifier;

@end
