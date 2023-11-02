
@interface PKTextInputStrokeProvider : PKStrokeProvider {
    NSNumber * _versionNumber;
}

@property (readonly, retain) NSNumber *strokeProviderVersion;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForSliceIdentifiers:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroidForSlicesWithIdentifiers:(id)arg1;
- (bool)containsStrokeWithUUID:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (bool)slicesWithIdentifiers:(id)arg1 significantlyOverlapRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })startingPointForSlicesWithIdentifiers:(id)arg1;
- (id)strokeProviderVersion;
- (id)strokesForSliceIdentifiers:(id)arg1;

@end
