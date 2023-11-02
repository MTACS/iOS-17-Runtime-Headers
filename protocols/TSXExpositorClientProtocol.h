
@protocol TSXExpositorClientProtocol <NSObject>

@required

- (void)clockManagerIsAvailable;
- (void)clockManagerIsUnavailable;
- (void)gPTPManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;

@end
