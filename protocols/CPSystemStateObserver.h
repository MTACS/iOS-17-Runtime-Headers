
@protocol CPSystemStateObserver <NSObject>

@required

- (void)addObserver:(id <CPSystemStateObserverObserver>)arg1 withQueue:(OS_dispatch_queue *)arg2;
- (bool)allowScreenSharing;
- (bool)allowSharePlay;

@end
