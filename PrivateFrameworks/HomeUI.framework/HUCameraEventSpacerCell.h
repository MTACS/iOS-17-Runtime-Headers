
@interface HUCameraEventSpacerCell : UICollectionViewCell {
    bool  _needsFullDashedLineWidth;
    bool  _spansMultipleDays;
}

@property (nonatomic) bool needsFullDashedLineWidth;
@property (nonatomic) bool spansMultipleDays;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsFullDashedLineWidth;
- (void)setNeedsFullDashedLineWidth:(bool)arg1;
- (void)setSpansMultipleDays:(bool)arg1;
- (bool)spansMultipleDays;
- (void)updateWithRecordingEvent:(id)arg1 previousEvent:(id)arg2 spanningMultipleDays:(bool)arg3;

@end
