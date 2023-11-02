
@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate> {
    int  _authorizationStatus;
    CLLocationManager * _locationManager;
    id /* block */  _makeAvailableCompletionHandler;
    WFWorkflow * _workflow;
}

@property (nonatomic) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, copy) id /* block */ makeAvailableCompletionHandler;
@property (readonly) Class superclass;

+ (bool)isSystemResource;

- (void).cxx_destruct;
- (int)authorizationStatus;
- (void)finishMakingAvailableWithSuccess:(bool)arg1 error:(id)arg2;
- (id)icon;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id /* block */)makeAvailableCompletionHandler;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)name;
- (id)protectedResourceDescription;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMakeAvailableCompletionHandler:(id /* block */)arg1;
- (void)setWorkflow:(id)arg1;
- (unsigned long long)status;
- (id)workflow;

@end
