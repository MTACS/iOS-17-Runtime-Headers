
@interface CMOnBodyStatusManager : NSObject {
    void * fLocationdConnection;
    id /* block */  fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> * fOnBodyStatusQueue;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fSubscribedToOnBodyStatusDetection;
}

+ (bool)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)setPropertiesWithDictionary:(id)arg1;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)stopOnBodyStatusDetection;
- (void)stopOnBodyStatusDetectionPrivate;

@end
