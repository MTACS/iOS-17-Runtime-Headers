
@interface PXUIAssetBadgeView : UIView {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
        long long fileSize; 
    }  _badgeInfo;
    struct CGSize { 
        double width; 
        double height; 
    }  _bottomElementsPadding;
    UILabel * _bottomLabel;
    _PXUIAssetBadgeImageView * _bottomLeadingImageView;
    _PXUIAssetBadgeImageView * _bottomTrailingImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _contentWidth;
    <PXUIAssetBadgeViewDelegate> * _delegate;
    struct { 
        bool menuForBadges; 
        bool userDidSelectBadges; 
        bool dismissPresentedViewController; 
    }  _delegateRespondsTo;
    bool  _isPerformingUpdate;
    struct { 
        bool topLeftElements; 
        bool topRightElements; 
        bool bottomLeadingImage; 
        bool bottomTrailingImage; 
        bool bottomLabel; 
        bool background; 
        bool contentSize; 
    }  _needsUpdateFlags;
    bool  _overContent;
    long long  _style;
    _PXUIAssetBadgeTopGroup * _topLeftPrimaryGroup;
    _PXUIAssetBadgeTopGroup * _topLeftSecondaryGroup;
    _PXUIAssetBadgeTopGroup * _topRightGroup;
}

@property (nonatomic, readonly) double _textureScale;
@property (nonatomic, readonly) bool _wantsBottomLabel;
@property (nonatomic) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; } badgeInfo;
@property (nonatomic) struct CGSize { double x1; double x2; } bottomElementsPadding;
@property (nonatomic) double contentWidth;
@property (nonatomic) <PXUIAssetBadgeViewDelegate> *delegate;
@property (getter=isOverContent, nonatomic) bool overContent;
@property (nonatomic) long long style;

+ (id)badgeSizeCacheKeyValueFromBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1 contentWidth:(double)arg2;
+ (id)measuringLabel;
+ (double)preferredHeightForStyle:(long long)arg1;
+ (void)preloadResourcesForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })sizeForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1 contentWidth:(double)arg2;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)_invalidate;
- (void)_invalidateBackground;
- (void)_invalidateBottomLabel;
- (void)_invalidateBottomLeadingImage;
- (void)_invalidateBottomTrailingImage;
- (void)_invalidateContentSize;
- (void)_invalidateTopLeftElements;
- (void)_invalidateTopRightElements;
- (void)_layoutBottomCornersImages;
- (void)_layoutBottomLabel;
- (void)_layoutTopGroup:(id)arg1;
- (bool)_needsUpdate;
- (void)_removeViewsFromGroup:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setNeedsUpdate;
- (double)_textureScale;
- (void)_updateBackgroundIfNeeded;
- (void)_updateBottomLabelIfNeeded;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_updateBottomTrailingImageIfNeeded;
- (void)_updateContentSizeIfNeeded;
- (void)_updateIfNeeded;
- (id)_updateTopGroup:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg2;
- (void)_updateTopLeftElementsIfNeeded;
- (void)_updateTopRightElementsIfNeeded;
- (bool)_wantsBottomLabel;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })badgeInfo;
- (struct CGSize { double x1; double x2; })bottomElementsPadding;
- (double)contentWidth;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOverContent;
- (void)layoutSubviews;
- (void)performChanges:(id /* block */)arg1 animated:(bool)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
- (void)setBottomElementsPadding:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverContent:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end
