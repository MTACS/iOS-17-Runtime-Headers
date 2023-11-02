
@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {
    struct __CFRunLoopSource { } * _collectHIDEventsRunLoopSource;
    UIEventFetcher * _eventFetcher;
    struct __CFRunLoopSource { } * _handleEventQueueRunLoopSource;
    UIEventEnvironment * _mainEnvironment;
    struct __CFRunLoop { } * _runLoop;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)eventFetcherDidReceiveEvents:(id)arg1;
- (id)initWithApplication:(id)arg1;

@end
