
@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell {
    UIImageView * _checkmarkImageView;
    bool  _checkmarkVisible;
}

@property (retain) UIImageView *checkmarkImageView;
@property (readonly) UIView *checkmarkView;
@property (getter=isCheckmarkVisible, nonatomic) bool checkmarkVisible;

+ (id)createCheckmarkView;
+ (id)identifier;

- (void).cxx_destruct;
- (bool)canCollapseRecipient;
- (id)checkmarkImageView;
- (id)checkmarkView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isCheckmarkVisible;
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setCheckmarkVisible:(bool)arg1;
- (void)setRecipient:(id)arg1;
- (id)titleTextStyle;

@end
