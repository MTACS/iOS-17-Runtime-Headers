
@interface MUAmenityListSectionView : MUPlaceVerticalCardContainerView {
    UIView * _applePayAmenityRowView;
    UIView * _applePayImageView;
    MUAmenityListSectionConfiguration * _configuration;
    bool  _expanded;
    UIButton * _moreButton;
}

@property (getter=isExpanded, nonatomic) bool expanded;

- (void).cxx_destruct;
- (void)_performExpansion;
- (void)_setupSubviews;
- (id)initWithAmenityListConfiguration:(id)arg1;
- (bool)isExpanded;
- (void)setExpanded:(bool)arg1;

@end
