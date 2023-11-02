
@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    PHFetchResult * _fetchResult;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_fetchSeenAssetsAndReload:(bool)arg1;
- (void)_markVariationsAsUnseenForAssetAtIndexPath:(id)arg1;
- (void)_presentConfirmationForAssetAtIndexPath:(id)arg1;
- (long long)_recommendedVariationTypeForAsset:(id)arg1;
- (id)_suggestedSeenFetchOptions;
- (id)fetchResult;
- (void)setFetchResult:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
