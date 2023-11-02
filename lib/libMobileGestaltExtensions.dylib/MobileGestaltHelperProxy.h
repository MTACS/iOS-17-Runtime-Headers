
@interface MobileGestaltHelperProxy : NSObject {
    NSXPCConnection * _connection;
    int  _error;
    <MobileGestaltHelper> * _helper;
}

@property (readonly) NSXPCConnection *connection;
@property int error;
@property (readonly) <MobileGestaltHelper> *helper;

+ (id)proxy;

- (id)connection;
- (void)dealloc;
- (int)error;
- (id)helper;
- (id)init;
- (void)invalidate;
- (bool)proxyRebuildCache;
- (bool)proxySetCacheSentinel;
- (void)setError:(int)arg1;

@end
