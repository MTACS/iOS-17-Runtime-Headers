
@protocol FBSOrientationObserverClientDelegate <NSObject>

@required

- (void)client:(FBSOrientationObserverClient *)arg1 handleOrientationUpdate:(FBSOrientationUpdate *)arg2;
- (void)handleOrientationResetForClient:(FBSOrientationObserverClient *)arg1;

@end
