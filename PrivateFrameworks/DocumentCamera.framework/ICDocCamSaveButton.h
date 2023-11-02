
@interface ICDocCamSaveButton : UIButton {
    UILabel * _countLabel;
    long long  _documentCount;
    NSMutableArray * _layoutConstraints;
    long long  _maxWidthForPortraitIPhone;
    UILabel * _saveLabel;
}

@property (nonatomic, retain) UILabel *countLabel;
@property (nonatomic) long long documentCount;
@property (nonatomic, retain) NSMutableArray *layoutConstraints;
@property (nonatomic) long long maxWidthForPortraitIPhone;
@property (nonatomic, retain) UILabel *saveLabel;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (id)countLabel;
- (long long)documentCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutConstraints;
- (void)layoutSubviews;
- (long long)maxWidthForPortraitIPhone;
- (id)saveButtonCountStringForDocumentCount:(unsigned long long)arg1;
- (id)saveButtonTitleForDocumentCount:(unsigned long long)arg1;
- (id)saveLabel;
- (void)setCountLabel:(id)arg1;
- (void)setDocumentCount:(long long)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setMaxWidthForPortraitIPhone:(long long)arg1;
- (void)setSaveLabel:(id)arg1;

@end
