
@interface ContinuousReadingPreviewView : UIView {
    SFBannerTheme * _bannerTheme;
    ContinuousReadingBannerView * _bannerView;
    UIView * _contentBackgroundView;
    WKWebView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentViewSize;
    ContinuousReadingItem * _continuousReadingItem;
    UIImage * _documentSnapshot;
    UIView * _headerHairline;
    UILabel * _headerLabel;
    UIView * _headerView;
    bool  _prefetchingDisabled;
    bool  _previewingNextDocument;
    UIImageView * _snapshotView;
}

@property (nonatomic, retain) ContinuousReadingBannerView *bannerView;
@property (nonatomic, readonly) bool canShowContentView;
@property (nonatomic, retain) UIView *contentBackgroundView;
@property (nonatomic, retain) WKWebView *contentView;
@property (nonatomic) struct CGSize { double x1; double x2; } contentViewSize;
@property (nonatomic, readonly, retain) ContinuousReadingItem *continuousReadingItem;
@property (nonatomic, retain) UIImage *documentSnapshot;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) UIView *headerView;
@property (getter=isPrefetchingDisabled, nonatomic) bool prefetchingDisabled;
@property (getter=isPreviewingNextDocument, nonatomic, readonly) bool previewingNextDocument;
@property (nonatomic, readonly) double rubberBandingHeight;

- (void).cxx_destruct;
- (void)_layOutContentView;
- (void)_layOutHeader;
- (id)bannerView;
- (bool)canShowContentView;
- (id)contentBackgroundView;
- (id)contentView;
- (struct CGSize { double x1; double x2; })contentViewSize;
- (id)continuousReadingItem;
- (id)documentSnapshot;
- (double)headerHeight;
- (id)headerLabel;
- (id)headerView;
- (id)initWithContinuousReadingItem:(id)arg1 previewingNextDocument:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPrefetchingDisabled;
- (bool)isPreviewingNextDocument;
- (void)layoutSubviews;
- (void)replaceContentViewWithItsSnapshot;
- (double)rubberBandingHeight;
- (void)setBannerTheme:(id)arg1 animated:(bool)arg2;
- (void)setBannerView:(id)arg1;
- (void)setContentBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDocumentSnapshot:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setPrefetchingDisabled:(bool)arg1;

@end
