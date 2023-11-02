
@interface PUParallaxLayerStackDebugTableViewController : UITableViewController {
    PUParallaxLayerStackView * _layerStackView;
}

@property (nonatomic, retain) PUParallaxLayerStackView *layerStackView;

- (void).cxx_destruct;
- (id)labelForLayer:(id)arg1;
- (id)layerForIndexPath:(id)arg1;
- (id)layerStackView;
- (id)layersSortedByViewDepth;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestNewZPositionForCellAtIndexPath:(id)arg1;
- (void)setLayerStackView:(id)arg1;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
