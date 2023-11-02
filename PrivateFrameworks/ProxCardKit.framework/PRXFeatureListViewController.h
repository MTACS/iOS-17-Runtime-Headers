
@interface PRXFeatureListViewController : PRXCardContentViewController <UITableViewDataSource, UITableViewDelegate> {
    UIImage * _featureImage;
    NSMutableArray * _mutableFeatures;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *featureImage;
@property (nonatomic, readonly) NSArray *features;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *mutableFeatures;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_updateHeaderView;
- (id)addFeature:(id)arg1;
- (id)featureImage;
- (id)features;
- (id)initWithContentView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)mutableFeatures;
- (void)setFeatureImage:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;

@end
