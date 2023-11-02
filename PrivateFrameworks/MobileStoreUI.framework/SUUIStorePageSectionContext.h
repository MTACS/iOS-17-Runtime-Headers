
@interface SUUIStorePageSectionContext : NSObject {
    SUUIMetricsImpressionSession * _activeMetricsImpressionSession;
    double  _activePageWidth;
    UICollectionView * _collectionView;
    SUUIColorScheme * _colorScheme;
    long long  _defaultPinningTransitionStyle;
    SUUIItemOfferButtonAppearance * _itemOfferButtonAppearance;
    double  _landscapePageWidth;
    long long  _layoutStyle;
    SUUIMetricsController * _metricsController;
    SUUIStorePageSectionsViewController * _parentViewController;
    UIColor * _placeholderColor;
    double  _portraitPageWidth;
    SUUIResourceLoader * _resourceLoader;
    SUUILayoutCache * _textLayoutCache;
}

@property (nonatomic, readonly) SUUIMetricsImpressionSession *activeMetricsImpressionSession;
@property (nonatomic, readonly) double activePageWidth;
@property (nonatomic, readonly) SUUIClientContext *clientContext;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) SUUIColorScheme *colorScheme;
@property (nonatomic, readonly) long long defaultPinningTransitionStyle;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) SUUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (nonatomic, readonly) double landscapePageWidth;
@property (nonatomic, readonly) long long layoutStyle;
@property (nonatomic, readonly) SUUIMetricsController *metricsController;
@property (nonatomic, readonly) SUUIStorePageSectionsViewController *parentViewController;
@property (nonatomic, readonly) UIColor *placeholderColor;
@property (nonatomic, readonly) double portraitPageWidth;
@property (nonatomic, readonly) SUUIResourceLoader *resourceLoader;
@property (nonatomic, readonly) SUUILayoutCache *textLayoutCache;

- (void).cxx_destruct;
- (void)_setActiveMetricsImpressionSession:(id)arg1;
- (void)_setActivePageWidth:(double)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setColorScheme:(id)arg1;
- (void)_setDefaultPinningTransitionStyle:(long long)arg1;
- (void)_setLandscapePageWidth:(double)arg1;
- (void)_setLayoutStyle:(long long)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setParentViewController:(id)arg1;
- (void)_setPortraitPageWidth:(double)arg1;
- (void)_setResourceLoader:(id)arg1;
- (void)_setTextLayoutCache:(id)arg1;
- (id)activeMetricsImpressionSession;
- (double)activePageWidth;
- (id)clientContext;
- (id)collectionView;
- (id)colorScheme;
- (long long)defaultPinningTransitionStyle;
- (double)horizontalPadding;
- (id)init;
- (id)itemOfferButtonAppearance;
- (double)landscapePageWidth;
- (long long)layoutStyle;
- (id)metricsController;
- (id)parentViewController;
- (id)placeholderColor;
- (double)portraitPageWidth;
- (id)resourceLoader;
- (id)textLayoutCache;

@end
