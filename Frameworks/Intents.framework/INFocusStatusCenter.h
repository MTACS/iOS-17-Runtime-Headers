
@interface INFocusStatusCenter : NSObject {
    DNDAvailabilityService * _service;
}

@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) INFocusStatus *focusStatus;
@property (nonatomic, readonly) DNDAvailabilityService *service;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (long long)authorizationStatus;
- (id)focusStatus;
- (id)init;
- (void)requestAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (id)service;

@end
