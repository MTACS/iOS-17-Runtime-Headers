
@protocol IKUpdateServiceRequestDelegate <IKServiceRequestDelegate>

@required

- (void)updateServiceRequest:(IKUpdateServiceRequest *)arg1 documentDidChange:(IKAppDocument *)arg2;

@end