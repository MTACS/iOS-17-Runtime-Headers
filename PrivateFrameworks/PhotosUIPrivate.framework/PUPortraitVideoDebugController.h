
@interface PUPortraitVideoDebugController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    PICompositionController * _compositionController;
    NSArray * _debugModes;
}

@property (nonatomic, retain) PICompositionController *compositionController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *debugModes;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)compositionController;
- (id)debugModes;
- (void)loadView;
- (void)setCompositionController:(id)arg1;
- (void)setDebugModes:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
