
@interface OZNotificationStub : NSObject {
    void * _pDocument;
    NSTimer * _pTimer;
}

- (void)createTimer;
- (void)dealloc;
- (void)fire;
- (id)initWithOZDocument:(void*)arg1 useTimer:(bool)arg2;
- (void)processNotifications:(id)arg1;
- (void)releaseTimer;

@end
