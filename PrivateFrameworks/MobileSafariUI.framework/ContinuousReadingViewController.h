
@interface ContinuousReadingViewController : NSObject <UIScrollViewDelegate> {
    SFBannerTheme * _bannerTheme;
    bool  _committingToContinuousDocument;
    ContinuousReadingItem * _currentItem;
    _SFWebView * _currentWebView;
    <ContinuousReadingViewControllerDelegate> * _delegate;
    UIScrollView * _outerScrollView;
    ContinuousReadingPreviewView * _previewView;
    ContinuousReadingPreviewView * _previousItemPreviewView;
    bool  _scrollingToNextContinuousDocument;
    bool  _suppressingAutoScroll;
}

@property (getter=isCommittingToContinuousDocument, nonatomic, readonly) bool committingToContinuousDocument;
@property (nonatomic, retain) ContinuousReadingItem *currentItem;
@property (nonatomic) _SFWebView *currentWebView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ContinuousReadingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_outerScrollView, setter=_setOuterScrollView:, nonatomic, retain) UIScrollView *outerScrollView;
@property (nonatomic, retain) ContinuousReadingPreviewView *previewView;
@property (nonatomic, retain) ContinuousReadingPreviewView *previousItemPreviewView;
@property (nonatomic, readonly) double scrollOffsetYForCurrentDocument;
@property (getter=isScrollingToNextContinuousDocument, nonatomic, readonly) bool scrollingToNextContinuousDocument;
@property (readonly) Class superclass;
@property (getter=isSuppressingAutoScroll, nonatomic) bool suppressingAutoScroll;
@property (nonatomic, readonly) ContinuousReadingBannerView *topBannerView;
@property (getter=isUserInteractingWithContainer, nonatomic, readonly) bool userInteractingWithContainer;
@property (nonatomic, readonly, retain) UIView *view;

- (void).cxx_destruct;
- (void)_commitToNextContinuousDocument;
- (void)_commitToPreviousContinuousDocument;
- (id)_outerScrollView;
- (double)_scrollOffsetYForNextDocument;
- (double)_scrollOffsetYForPreviousDocument;
- (void)_setOuterScrollView:(id)arg1;
- (void)_willCommitToContinuousDocumentInPreviewView:(id)arg1;
- (id)currentItem;
- (id)currentWebView;
- (id)delegate;
- (void)didCreateWebViewForNextDocument:(id)arg1;
- (void)didCreateWebViewForPreviousDocument:(id)arg1;
- (void)innerScrollViewDidScroll:(id)arg1;
- (bool)isCommittingToContinuousDocument;
- (bool)isScrollingToNextContinuousDocument;
- (bool)isSuppressingAutoScroll;
- (bool)isUserInteractingWithContainer;
- (void)loadNextItem;
- (void)loadPreviousItem;
- (id)previewView;
- (id)previousItemPreviewView;
- (double)scrollOffsetYForCurrentDocument;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBannerTheme:(id)arg1 animated:(bool)arg2;
- (void)setCurrentItem:(id)arg1;
- (void)setCurrentWebView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setPreviousItemPreviewView:(id)arg1;
- (void)setSuppressingAutoScroll:(bool)arg1;
- (id)topBannerView;
- (void)updateContinuousPreviewViewSizeAttributes;
- (void)updateOuterScrollView;
- (id)view;

@end
