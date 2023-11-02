
@interface PFCloudKitThrottledNotificationObserver : NSObject {
    NSString * _assertionLabel;
    NSString * _label;
    id /* block */  _notificationHandlerBlock;
    _Atomic int  _notificationIteration;
    long long  _notificationStalenessInterval;
}

- (void)dealloc;
- (id)initWithLabel:(id)arg1 handlerBlock:(id /* block */)arg2;

@end
