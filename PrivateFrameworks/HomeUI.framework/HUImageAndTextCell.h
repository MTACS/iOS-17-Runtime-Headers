
@interface HUImageAndTextCell : UITableViewCell <HUCellProtocol, HUCellSeparatorAppearanceDefining> {
    NSArray * _contentConstraints;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageViewRecommendedSize;
    UIImageView * _infoImageView;
    UILayoutGuide * _infoImageViewTrailingMarginLayoutGuide;
    HFItem * _item;
    UITextView * _messageTextView;
}

@property (nonatomic, retain) NSArray *contentConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } imageViewRecommendedSize;
@property (nonatomic, readonly) UIImageView *infoImageView;
@property (nonatomic, readonly) UILayoutGuide *infoImageViewTrailingMarginLayoutGuide;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, readonly) UITextView *messageTextView;
@property (nonatomic, readonly) bool prefersSeparatorsHidden;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetContentConstraints;
- (id)contentConstraints;
- (struct CGSize { double x1; double x2; })imageViewRecommendedSize;
- (id)infoImageView;
- (id)infoImageViewTrailingMarginLayoutGuide;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)messageTextView;
- (bool)prefersSeparatorsHidden;
- (void)prepareForReuse;
- (void)setContentConstraints:(id)arg1;
- (void)setImageViewRecommendedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItem:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(bool)arg1;

@end
