
@interface CMGestureManagerInternal : NSObject {
    id /* block */  fGestureHandler;
    void * fLocationdConnection;
    int  fPriority;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
}

- (void)dealloc;
- (id)initWithPriority:(int)arg1;
- (void)startGestureUpdatesWithHandlerPrivate:(id /* block */)arg1;
- (void)stopGestureUpdatesPrivate;

@end
