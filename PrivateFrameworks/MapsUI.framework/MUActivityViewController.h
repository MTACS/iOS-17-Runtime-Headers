
@interface MUActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate> {
    <MUActivityViewControllerDelegate> * _activityControllerDelegate;
}

@property (nonatomic) <MUActivityViewControllerDelegate> *activityControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_activityHandler;
- (bool)_canShowWhileLocked;
- (id /* block */)_completionHandler;
- (id)activityControllerDelegate;
- (id)initWithActivityItems:(id)arg1;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithShareItem:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;
- (void)setActivityControllerDelegate:(id)arg1;

@end
