
@interface TLKDescriptionContainerBoxView : NUIContainerBoxView {
    TLKTextView * _viewForFirstAndLastBaseline;
}

@property (nonatomic, retain) TLKTextView *viewForFirstAndLastBaseline;

- (void).cxx_destruct;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (void)setViewForFirstAndLastBaseline:(id)arg1;
- (id)viewForFirstAndLastBaseline;

@end
