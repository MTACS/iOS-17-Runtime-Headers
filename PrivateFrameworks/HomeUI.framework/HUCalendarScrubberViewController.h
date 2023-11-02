
@interface HUCalendarScrubberViewController : UICollectionViewController <HUCalendarScrubberDataSourceChangeObserver> {
    long long  _currentSection;
    HUCalendarScrubberDataSource * _dataSource;
    double  _lastBoundsWidth;
    id /* block */  _scrollCompletionBlock;
    <HUCalendarScrubberViewDelegate> * _scrubberDelegate;
}

@property (nonatomic) long long currentSection;
@property (nonatomic, retain) HUCalendarScrubberDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastBoundsWidth;
@property (nonatomic, readonly) unsigned long long nextSection;
@property (nonatomic, readonly) unsigned long long previousSection;
@property (nonatomic, copy) id /* block */ scrollCompletionBlock;
@property (nonatomic) <HUCalendarScrubberViewDelegate> *scrubberDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)currentSection;
- (id)dataSource;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)jumpToSection:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (double)lastBoundsWidth;
- (unsigned long long)nextSection;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)previousSection;
- (id /* block */)scrollCompletionBlock;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrubberDataSourceDidReload:(id)arg1;
- (id)scrubberDelegate;
- (void)setCurrentSection:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setLastBoundsWidth:(double)arg1;
- (void)setScrollCompletionBlock:(id /* block */)arg1;
- (void)setScrubberDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
