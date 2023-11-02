
@interface SPUISearchStateRestorationContext : NSObject <NSSecureCoding> {
    SPUIResultsViewStateRestorationContext * _searchViewContext;
    double  _timeAtDismissal;
    NSArray * _viewControllerContexts;
}

@property (retain) SPUIResultsViewStateRestorationContext *searchViewContext;
@property double timeAtDismissal;
@property (retain) NSArray *viewControllerContexts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)searchViewContext;
- (void)setSearchViewContext:(id)arg1;
- (void)setTimeAtDismissal:(double)arg1;
- (void)setViewControllerContexts:(id)arg1;
- (double)timeAtDismissal;
- (id)viewControllerContexts;

@end
