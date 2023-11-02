
@interface PRSidebarComplicationsSnapshotViewController : UIViewController <BSInvalidatable> {
    FBSScene * _scene;
    PRWidgetGridViewController * _widgetGridViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBSScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, retain) PRWidgetGridViewController *widgetGridViewController;

- (void).cxx_destruct;
- (id)initWithScene:(id)arg1 complicationLayoutProvider:(id)arg2;
- (void)invalidate;
- (id)scene;
- (void)setScene:(id)arg1;
- (void)setWidgetGridViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)widgetGridViewController;

@end
