
@interface _SUIKSearchResultsUpdateOperation : NSOperation {
    <SUIKSearchResultsCollectionViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    NSArray * _results;
}

@property (nonatomic) <SUIKSearchResultsCollectionViewControllerDelegate> *delegate;
@property (nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) NSArray *results;

- (void).cxx_destruct;
- (id)delegate;
- (id)diffableDataSource;
- (id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3;
- (void)main;
- (id)results;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setResults:(id)arg1;

@end
