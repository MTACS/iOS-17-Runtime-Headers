
@interface PKDiscoveryCardView : UIView {
    PKDiscoveryArticleLayout * _articleLayout;
    UIColor * _backgroundColor;
    UIImageView * _backgroundImageView;
    id /* block */  _callToActionTappedOverride;
    PKDiscoveryCard * _card;
    PKDiscoveryCardViewTemplateInformation * _cardTemplateInformation;
    PKDiscoveryCallToActionFooterView * _ctaFooterView;
    long long  _currentCardSize;
    <PKDiscoveryCardViewDelegate> * _delegate;
    id /* block */  _dismissAction;
    PKContinuousButton * _dismissButton;
    long long  _displayType;
    bool  _hasSafeAreaInsetOverride;
    UILabel * _headingLabel;
    PKDiscoveryMedia * _largeCardMedia;
    long long  _largeCardTemplate;
    UIImageView * _maskImageView;
    PKMiniDiscoveryCard * _miniCard;
    UIView * _miniCardBackgroundColorView;
    PKDiscoveryMedia * _miniCardMedia;
    long long  _miniCardTemplate;
    long long  _priority;
    bool  _removing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaOverrideInsets;
    UIImageView * _shadowView;
    bool  _shouldDisplayAsLarge;
    UITapGestureRecognizer * _tapRecognizer;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) PKDiscoveryArticleLayout *articleLayout;
@property (nonatomic, copy) id /* block */ callToActionTappedOverride;
@property (nonatomic, retain) PKDiscoveryCardViewTemplateInformation *cardTemplateInformation;
@property (nonatomic) <PKDiscoveryCardViewDelegate> *delegate;
@property (nonatomic, copy) id /* block */ dismissAction;
@property (nonatomic) bool hasSafeAreaInsetOverride;
@property (nonatomic, readonly) long long priority;
@property (getter=isRemoving, nonatomic) bool removing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaOverrideInsets;

+ (double)compressedHeight;
+ (struct CGSize { double x1; double x2; })compressedSize;
+ (double)compressedWidth;
+ (double)cornerRadius;
+ (double)expandedHeight;
+ (struct CGSize { double x1; double x2; })expandedSize;
+ (double)expandedWidth;
+ (struct CGSize { double x1; double x2; })miniCompressedSize;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_currentContentInsets;
- (void)_dismissButtonPressed:(id)arg1;
- (id)_dismissButtonTintColor;
- (id)_headingLabelFont;
- (id)_headingLabelTextColor;
- (struct CGSize { double x1; double x2; })_miniCardImageSize;
- (id)_titleLabelFont;
- (id)_titleLabelTextColor;
- (void)_updateForDisplayType;
- (double)_yOffsetToHeadingLabel;
- (id)articleLayout;
- (id /* block */)callToActionTappedOverride;
- (id)cardTemplateInformation;
- (id)delegate;
- (id /* block */)dismissAction;
- (bool)hasSafeAreaInsetOverride;
- (id)initWithArticleLayout:(id)arg1 dismissImage:(id)arg2 cardTemplateInformation:(id)arg3;
- (id)initWithArticleLayout:(id)arg1 dismissImage:(id)arg2 cardTemplateInformation:(id)arg3 callToActionTappedOverride:(id /* block */)arg4;
- (bool)isRemoving;
- (void)layoutSubviews;
- (void)loadAndUploadImageData;
- (long long)priority;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaOverrideInsets;
- (void)setArticleLayout:(id)arg1;
- (void)setCallToActionTappedOverride:(id /* block */)arg1;
- (void)setCardSize:(long long)arg1;
- (void)setCardTemplateInformation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissAction:(id /* block */)arg1;
- (void)setDisplayType:(long long)arg1;
- (void)setHasSafeAreaInsetOverride:(bool)arg1;
- (void)setRemoving:(bool)arg1;
- (void)setSafeAreaOverrideInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tapGestureRecognized:(id)arg1;

@end
