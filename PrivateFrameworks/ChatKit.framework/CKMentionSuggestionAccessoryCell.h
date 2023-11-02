
@interface CKMentionSuggestionAccessoryCell : UICollectionReusableView {
    UIView * _separatorView;
}

@property (nonatomic, retain) UIView *separatorView;

+ (id)reuseIdentifier;
+ (id)supplementryViewKind;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;

@end
