
@interface CLSGeoServiceThread : NSThread {
    struct __CFRunLoop { } * _runLoop;
}

- (void)cancel;
- (void)main;

@end
