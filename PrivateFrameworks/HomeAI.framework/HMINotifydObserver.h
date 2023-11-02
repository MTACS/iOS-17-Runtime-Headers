
@interface HMINotifydObserver : HMFObject <HMFLogging> {
    id /* block */  _callback;
    const char * _notificationName;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const char *notificationName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic) int token;

+ (id)logCategory;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)dealloc;
- (id)initWithNotificationName:(const char *)arg1 andQueue:(id)arg2 andCallback:(id /* block */)arg3;
- (const char *)notificationName;
- (void)publishInitialValue;
- (void)publishValueForToken:(int)arg1;
- (id)queue;
- (void)setToken:(int)arg1;
- (bool)start;
- (int)token;

@end
