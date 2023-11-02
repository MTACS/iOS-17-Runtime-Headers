
@interface PXCMMTranscriptTextView : UIView {
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UILabel * _secondaryLabel;
    NSString * _secondaryText;
    PXUpdater * _updater;
}

@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInSize:(struct CGSize { double x1; double x2; })arg1 minimizingSize:(bool)arg2 updateSubviewFrames:(bool)arg3;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryText;
- (id)secondaryText;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
