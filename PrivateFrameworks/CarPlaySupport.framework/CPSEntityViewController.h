
@interface CPSEntityViewController : CPSBaseTemplateViewController <CPEntityUpdateProviding, CPSEntityActionDelegate> {
    NSMapTable * _buttonMap;
    CPSBaseEntityContentViewController * _contentViewController;
    CPEntity * _entity;
    CPSEntityResourceProvider * _resourceProvider;
}

@property (nonatomic, retain) NSMapTable *buttonMap;
@property (nonatomic, readonly) CPSBaseEntityContentViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSEntityResourceProvider *resourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_viewDidLoad;
- (id)buttonMap;
- (id)contentViewController;
- (id)entity;
- (bool)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forEntity:(id)arg3;
- (bool)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forPOI:(id)arg3;
- (bool)entityContentViewController:(id)arg1 didSelectPointOfInterestWithIdentifier:(id)arg2;
- (bool)entityContentViewController:(id)arg1 regionDidChange:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)entityTemplate;
- (id)entityTemplateDelegate;
- (id)initWithEntityTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (id)resourceProvider;
- (void)setButtonMap:(id)arg1;
- (void)setResourceProvider:(id)arg1;
- (void)setupViewControllers;
- (void)trailingBarButtonPressed:(id)arg1;
- (void)updateEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2;

@end
