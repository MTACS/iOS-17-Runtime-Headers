
@protocol ESIMProxTransferControllerDelegate

@required

- (void)didComplete;
- (void)didRequestPresentationForProxCard:(id <PRXCardContentProviding>)arg1;

@end
