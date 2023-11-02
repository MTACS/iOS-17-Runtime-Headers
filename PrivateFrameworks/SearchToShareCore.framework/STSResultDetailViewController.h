
@interface STSResultDetailViewController : UIViewController <STSResultDetailViewDelegate, UIGestureRecognizerDelegate> {
    bool  _allowCustomContentViewInteraction;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSURL * _contentURL;
    <STSResultDetailViewControllerDelegate> * _delegate;
    unsigned long long  _numberOfReportedResults;
    NSURL * _providerURL;
    unsigned long long  _queryId;
    NSString * _queryString;
    SFSearchResult * _searchResult;
    bool  _useBackgroundBlur;
}

@property (nonatomic) bool allowCustomContentViewInteraction;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) NSURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STSResultDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFullscreen;
@property unsigned long long numberOfReportedResults;
@property (nonatomic, retain) UIImage *providerIcon;
@property (nonatomic) struct CGSize { double x1; double x2; } providerIconSize;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, retain) NSURL *providerURL;
@property unsigned long long queryId;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly) STSAnimatedImageInfo *thumbnailInfo;
@property (nonatomic) bool useBackgroundBlur;
@property (nonatomic, retain) STSResultDetailView *view;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (bool)allowCustomContentViewInteraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentURL;
- (id)delegate;
- (id)detailView;
- (void)detailViewDidTapProvider:(id)arg1;
- (void)detailViewDidTapReportConcern:(id)arg1;
- (void)detailViewDidTapSend:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)isFullscreen;
- (void)loadView;
- (unsigned long long)numberOfReportedResults;
- (bool)prefersStatusBarHidden;
- (id)providerIcon;
- (struct CGSize { double x1; double x2; })providerIconSize;
- (id)providerName;
- (id)providerURL;
- (unsigned long long)queryId;
- (id)queryString;
- (id)searchResult;
- (void)setAllowCustomContentViewInteraction:(bool)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFullscreen:(bool)arg1;
- (void)setNumberOfReportedResults:(unsigned long long)arg1;
- (void)setProviderIcon:(id)arg1;
- (void)setProviderIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProviderName:(id)arg1;
- (void)setProviderURL:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setUseBackgroundBlur:(bool)arg1;
- (id)thumbnail;
- (id)thumbnailInfo;
- (void)updateCustomContentWithView:(id)arg1;
- (void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2;
- (bool)useBackgroundBlur;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
