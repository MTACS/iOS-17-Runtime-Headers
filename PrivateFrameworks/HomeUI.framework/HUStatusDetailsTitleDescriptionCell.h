
@interface HUStatusDetailsTitleDescriptionCell : UICollectionViewCell <UITextViewDelegate> {
    UITextView * _descriptionTextView;
    NSArray * _labelConstraints;
    HUGridLayoutOptions * _layoutOptions;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <HFStringGenerator> *descriptionText;
@property (nonatomic, retain) UITextView *descriptionTextView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *labelConstraints;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) <HFStringGenerator> *titleText;

- (void).cxx_destruct;
- (void)_layoutContentApplyingFrames:(bool)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 desiredSize:(out struct CGSize { double x1; double x2; }*)arg3;
- (id)descriptionText;
- (id)descriptionTextView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelConstraints;
- (id)layoutOptions;
- (void)layoutSubviews;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setLabelConstraints:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)titleText;

@end
