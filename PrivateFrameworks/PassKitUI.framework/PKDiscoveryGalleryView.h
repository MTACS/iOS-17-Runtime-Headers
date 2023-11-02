
@interface PKDiscoveryGalleryView : UIView <PKDiscoveryArticleViewControllerDelegate, PKDiscoveryCardViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView, UIScrollViewDelegate> {
    bool  _animatingCard;
    bool  _articleLayoutsUpdatedAfterEnteringForegroundActive;
    bool  _cardSizeStateIsDirty;
    PKDiscoveryCardViewTemplateInformation * _cardTemplateInformation;
    NSMutableArray * _cardViews;
    PKDiscoveryDataSource * _dataSource;
    NSMutableArray * _discoveryCardViews;
    UIImage * _dismissImage;
    NSArray * _displayedCardViews;
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _foregroundState;
    UIScrollView * _horizontalScrollView;
    NSString * _lastReportedDiscoveryItemIdentifier;
    double  _lastTimeForegroundActive;
    struct { 
        struct { 
            struct { 
                unsigned int hasPayment : 1; 
                unsigned int hasBarcode : 1; 
            } welcome; 
            unsigned int hasDiscovery : 1; 
        } cards; 
        unsigned int barcodePassWelcomeCardIsDismissable : 1; 
    }  _layoutState;
    UIPageControl * _pageControl;
    PKDiscoveryCardView * _passWelcomeView;
    PKDiscoveryCardView * _paymentWelcomeView;
    unsigned long long  _pendingDeletes;
    <PKPGSVSectionSubheaderDelegate> * _subheaderDelegate;
    unsigned char  _visibilityState;
    PKDiscoveryCardViewTemplateInformation * _welcomeCardTemplateInformation;
}

@property (getter=isAnimatingCard, nonatomic) bool animatingCard;
@property (nonatomic, retain) PKDiscoveryDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *frontmostItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct { unsigned int x1 : 1; unsigned int x2 : 1; })_welcomeStateForState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
+ (bool)isVisibleForSectionsState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1 dataSource:(id)arg2;
+ (bool)isWelcomeCardVisibleForSectionsState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
+ (id)passWelcomeCardMessageAttributedString;

- (void).cxx_destruct;
- (void)_appStorePressed;
- (struct CGSize { double x1; double x2; })_cardSize;
- (struct CGSize { double x1; double x2; })_contentSize;
- (id)_createPassWelcomeCardView;
- (id)_createPaymentWelcomeCardView;
- (unsigned long long)_indexForCardViewWithIdentifier:(id)arg1;
- (void)_pageControlChanged:(id)arg1;
- (void)_removeCardView:(id)arg1 animated:(bool)arg2;
- (void)_reportCurrentDiscoveryCardToDiscoveryService;
- (bool)_requestDismissalIfNecessaryAfterLayoutStateUpdate;
- (void)_scanCodePressed;
- (void)_updateCardSizeIfNecessary;
- (void)_updateCardViews;
- (void)_updateCardViewsAnimated:(bool)arg1;
- (void)_updateCardViewsAnimated:(bool)arg1 overrideFrontmostCardToIdentifier:(id)arg2;
- (void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg1 overrideFrontmostCardToIdentifier:(id)arg2 animated:(bool)arg3;
- (void)_updatePageControlVisibilityWithDelay:(double)arg1;
- (void)_updatePageControlWithDisplayIndex;
- (void)_updateScrollViewToCardIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (id)cardViewForCardWithItemIdentifier:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)discoveryArticleViewController:(id)arg1 tappedCallToAction:(id)arg2 item:(id)arg3;
- (void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2 itemIdentifier:(id)arg3;
- (void)discoveryCardViewRemoveTapped:(id)arg1;
- (void)discoveryCardViewTapped:(id)arg1;
- (unsigned long long)displayIndex;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)frontmostItemIdentifier;
- (id)init;
- (id)initWithCardTemplateInformation:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimatingCard;
- (void)layoutSubviews;
- (bool)needsRemoval;
- (long long)scrollType;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAnimatingCard:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSectionsState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
- (void)setSubheaderDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateArticleLayouts:(id)arg1;
- (void)updatePageControlFrame;

@end
