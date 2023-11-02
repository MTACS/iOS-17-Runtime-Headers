
@interface _UIOHypogeanViewRequestAction_TestingOnly : _UIOServerAction

@property (nonatomic, readonly) _UIOHypogeanViewRequestConfiguration *configuration;

+ (id)_overlay_viewRegistry;

- (id)configuration;
- (id)initWithConfiguration:(id)arg1 responseHandler:(id /* block */)arg2;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;

@end
