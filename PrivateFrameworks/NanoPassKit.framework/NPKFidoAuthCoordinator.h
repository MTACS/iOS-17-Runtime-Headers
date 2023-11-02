
@interface NPKFidoAuthCoordinator : NSObject {
    LAContext * _context;
}

@property (nonatomic, readonly) LAContext *context;

- (void).cxx_destruct;
- (bool)_isDeviceLocked;
- (bool)_isWristDetectDisabled;
- (void)clearContext;
- (id)context;
- (void)requestAuthorizationWithCompletion:(id /* block */)arg1;

@end
