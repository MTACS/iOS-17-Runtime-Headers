
@interface NewsFeed.DebugFormatDebuggerSourceViewController : UIViewController <UIScrollViewDelegate> {
    void $__lazy_storage_$_charSize;
    void breakpointHitCountLabel;
    void edgeView;
    void edgeViewPadding;
    void editor;
    void highlightView;
    void lineAndHighlightSize;
    void lineNumberLabel;
    void scrollView;
    void source;
    void textView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
