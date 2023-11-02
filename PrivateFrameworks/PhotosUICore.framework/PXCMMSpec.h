
@interface PXCMMSpec : PXFeatureSpec {
    unsigned long long  _activityType;
    double  _bubbleStatusIconCornerRadius;
    double  _composeCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _composeFooterInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _composeFooterMargins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _composeHeaderLabelMargins;
    double  _composeHeaderVerticalPadding;
    double  _composePrivacyMessageInset;
    UIColor * _composeRecipientViewBackgroundColor;
    UIColor * _reviewBackgroundColor;
    double  _reviewBannerHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _reviewContentInsets;
    double  _reviewFooterBottomInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _reviewGridContentInsets;
    long long  _reviewGridContentMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _reviewGridInterItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _reviewGridItemSize;
    double  _reviewHeaderCornerRadius;
    double  _reviewHeaderTopInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _reviewSafeAreaInsets;
    double  _reviewSectionHeaderHeight;
    double  _reviewSendBackFooterHeight;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) UIColor *bubbleBackgroundColor;
@property (nonatomic, readonly) double bubbleStatusIconCornerRadius;
@property (nonatomic, readonly) double composeCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } composeFooterInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } composeFooterMargins;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } composeHeaderLabelMargins;
@property (nonatomic, readonly) double composeHeaderVerticalPadding;
@property (nonatomic, readonly) double composePrivacyMessageInset;
@property (nonatomic, readonly) UIColor *composeRecipientViewBackgroundColor;
@property (nonatomic, readonly) UIColor *reviewBackgroundColor;
@property (nonatomic, readonly) double reviewBannerHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } reviewContentInsets;
@property (nonatomic, readonly) double reviewFooterBottomInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } reviewGridContentInsets;
@property (nonatomic, readonly) long long reviewGridContentMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } reviewGridInterItemSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } reviewGridItemSize;
@property (nonatomic, readonly) double reviewHeaderCornerRadius;
@property (nonatomic, readonly) double reviewHeaderTopInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } reviewSafeAreaInsets;
@property (nonatomic, readonly) double reviewSectionHeaderHeight;
@property (nonatomic, readonly) double reviewSendBackFooterHeight;

+ (double)maxBubbleWidthForDisplayScale:(double)arg1;

- (void).cxx_destruct;
- (double)_reviewSectionHeaderHeightForContentSize:(id)arg1;
- (unsigned long long)activityType;
- (id)bubbleBackgroundColor;
- (double)bubbleStatusIconCornerRadius;
- (double)composeCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })composeFooterInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })composeFooterMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })composeHeaderLabelMargins;
- (double)composeHeaderVerticalPadding;
- (double)composePrivacyMessageInset;
- (id)composeRecipientViewBackgroundColor;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;
- (id)reviewBackgroundColor;
- (double)reviewBannerHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })reviewContentInsets;
- (double)reviewFooterBottomInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })reviewGridContentInsets;
- (long long)reviewGridContentMode;
- (struct CGSize { double x1; double x2; })reviewGridInterItemSpacing;
- (struct CGSize { double x1; double x2; })reviewGridItemSize;
- (double)reviewHeaderCornerRadius;
- (double)reviewHeaderTopInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })reviewSafeAreaInsets;
- (double)reviewSectionHeaderHeight;
- (double)reviewSendBackFooterHeight;

@end
