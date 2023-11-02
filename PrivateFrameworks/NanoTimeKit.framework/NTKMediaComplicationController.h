
@interface NTKMediaComplicationController : NSObject <MPRequestResponseControllerDelegate> {
    <NTKMediaComplicationControllerDelegate> * _delegate;
    MPRequestResponseController * _requestResponseController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKMediaComplicationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRoutingControllerActiveSystemRouteDidChange:(id)arg1;
- (void)_updateActiveRoute;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (id)delegate;
- (id)launchURLWithScheme:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
