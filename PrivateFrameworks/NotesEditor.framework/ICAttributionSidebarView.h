
@interface ICAttributionSidebarView : UIView {
    ICAttributionLayoutManager * _attributionLayoutManager;
    NSMapTable * _attributionViewMap;
    ICAuthorHighlightsUpdater * _authorHighlightsUpdater;
    bool  _didExpandSidebar;
    ICTTTextEditFilter * _filter;
    ICAttributionViewConfiguration * _focusedAttributionViewConfiguration;
    ICSelectorDelayer * _reloadAttributionsDelayer;
    ICTextView * _textView;
    double  _visibleContentWidth;
}

@property (nonatomic, retain) ICAttributionLayoutManager *attributionLayoutManager;
@property (nonatomic, retain) NSMapTable *attributionViewMap;
@property (nonatomic) ICAuthorHighlightsUpdater *authorHighlightsUpdater;
@property (nonatomic) bool didExpandSidebar;
@property (nonatomic, copy) ICTTTextEditFilter *filter;
@property (nonatomic, retain) ICAttributionViewConfiguration *focusedAttributionViewConfiguration;
@property (nonatomic, readonly) double fullContentWidth;
@property (nonatomic, readonly) double previewContentWidth;
@property (nonatomic, readonly) ICSelectorDelayer *reloadAttributionsDelayer;
@property (nonatomic) ICTextView *textView;
@property (nonatomic) double visibleContentWidth;

- (void).cxx_destruct;
- (bool)accessibilityElementsHidden;
- (void)analyticsSessionWillEnd:(id)arg1;
- (id)attributionLayoutManager;
- (id)attributionViewMap;
- (id)authorHighlightsUpdater;
- (bool)didExpandSidebar;
- (id)filter;
- (void)focusAttributionView:(id)arg1;
- (id)focusedAttributionViewConfiguration;
- (double)fullContentWidth;
- (void)handleTapGesture:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)previewContentWidth;
- (void)reload;
- (void)reloadAttributions;
- (id)reloadAttributionsDelayer;
- (void)reloadAttributionsWithCompletion:(id /* block */)arg1;
- (void)removeAllAttributionViews;
- (void)renderAttributionView:(id)arg1;
- (void)renderAttributions;
- (void)scrollToRangeIfNeeded:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAttributionLayoutManager:(id)arg1;
- (void)setAttributionViewMap:(id)arg1;
- (void)setAuthorHighlightsUpdater:(id)arg1;
- (void)setDidExpandSidebar:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilter:(id)arg1 animated:(bool)arg2;
- (void)setFocusedAttributionViewConfiguration:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setVisibleContentWidth:(double)arg1;
- (void)setVisibleContentWidth:(double)arg1 isGestureActive:(bool)arg2;
- (id)textView;
- (void)textViewLayoutDidChange:(id)arg1;
- (void)unfocusAttributionDetails;
- (double)visibleContentWidth;
- (void)willEnterForeground:(id)arg1;

@end
