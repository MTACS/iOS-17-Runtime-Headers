
@interface PKDiscoveryCallToActionFooterView : UIView <PKLinkedApplicationObserver> {
    PKContinuousButton * _button;
    PKDiscoveryCallToAction * _callToAction;
    id /* block */  _callToActionTappedOverride;
    <PKDiscoveryCardViewDelegate> * _delegate;
    long long  _displayType;
    UILabel * _editorialDescriptionLabel;
    UILabel * _expandedEditorialDescriptionLabel;
    UILabel * _expandedTitleLabel;
    bool  _hasButton;
    bool  _hasIcon;
    UIImageView * _iconImageView;
    NSString * _itemIdentifier;
    PKLinkedApplication * _linkedApplication;
    PKDiscoveryMedia * _media;
    bool  _showActivityIndicator;
    UILabel * _titleLabel;
    bool  _useAccessibilityLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDiscoveryCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_buttonSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_buttonWidthForLabelWidth:(double)arg1;
- (id)_descriptionLabelColor;
- (id)_descriptionLabelWithLocalizedDescription:(id)arg1;
- (id)_editorialDescriptionLabelFont;
- (struct CGSize { double x1; double x2; })_iconSize;
- (void)_loadImageData;
- (id)_titleLabelColor;
- (id)_titleLabelFont;
- (id)_titleLabelWithLocalizedTitle:(id)arg1;
- (id)delegate;
- (long long)displayType;
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2;
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2 itemIdentifier:(id)arg3;
- (id)itemIdentifier;
- (void)layoutSubviews;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)setCallToActionTappedOverride:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayType:(long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (bool)showActivityIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
