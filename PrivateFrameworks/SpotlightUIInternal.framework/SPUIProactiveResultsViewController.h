
@interface SPUIProactiveResultsViewController : SPUIResultsViewController {
    NSTimer * _footerTransitionTimer;
}

@property (retain) NSTimer *footerTransitionTimer;
@property (readonly) SPUISearchModelZKW *model;

- (void).cxx_destruct;
- (void)fadeInFooterView;
- (id)footerTransitionTimer;
- (id)initWithSearchModel:(id)arg1 searchEntity:(id)arg2;
- (unsigned long long)refreshResultsWithContext:(id)arg1 allowPartialUpdates:(bool)arg2;
- (bool)searchAgentHasWindow:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)setFooterTransitionTimer:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)updateWithResultSections:(id)arg1 resetScrollPoint:(bool)arg2 animated:(bool)arg3;

@end
