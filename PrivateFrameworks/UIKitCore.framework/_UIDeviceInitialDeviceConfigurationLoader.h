
@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject {
    UISDeviceContext * _context;
    bool  _hasRequestedPreload;
}

@property (nonatomic, readonly) UISDeviceContext *initialDeviceContext;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (void)_startPreloadInitialDeviceContext;
- (id)initialDeviceContext;

@end
