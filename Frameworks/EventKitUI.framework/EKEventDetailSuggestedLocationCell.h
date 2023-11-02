
@interface EKEventDetailSuggestedLocationCell : UITableViewCell {
    UIView<SGBannerProtocol> * _banner;
    <EKEventDetailSuggestedLocationCellDelegate> * _delegate;
    EKEvent * _event;
    bool  _inlineStyle;
    EKStructuredLocation * _location;
}

@property (nonatomic, retain) UIView<SGBannerProtocol> *banner;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bannerPopoverSourceRect;
@property (nonatomic, readonly) UIView *bannerView;
@property (nonatomic) <EKEventDetailSuggestedLocationCellDelegate> *delegate;
@property (nonatomic) bool inlineStyle;

- (void).cxx_destruct;
- (void)_disambiguateIfNeeded;
- (void)_setIcon;
- (void)addAction;
- (id)banner;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bannerPopoverSourceRect;
- (id)bannerView;
- (void)commonInit;
- (id)delegate;
- (void)dismissAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithInlineStyle:(bool)arg1;
- (bool)inlineStyle;
- (void)setBanner:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setInlineStyle:(bool)arg1;

@end
