
@interface NSNetServicesInternal : NSObject {
    NSObject<OS_tcp_listener> * _listener;
    NSMutableArray * _monitors;
    struct __CFString { } * _scheduledMode;
    struct __CFRunLoop { } * _scheduledRunLoop;
}

- (void)dealloc;

@end
