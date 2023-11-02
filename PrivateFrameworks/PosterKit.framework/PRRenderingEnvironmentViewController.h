
@interface PRRenderingEnvironmentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    <PRRenderingEnvironmentViewControllerDelegate> * _delegate;
    PRPosterEnvironmentImpl * _environment;
    FBSMutableSceneSettings * _settings;
}

@property (nonatomic, readonly) PRPosterEnvironmentImpl *currentEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cell:(id)arg1 presentViewController:(id)arg2;
- (void)cell:(id)arg1 valueChanged:(id)arg2;
- (id)currentEnvironment;
- (id)initWithEnvironment:(id)arg1 delegate:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
