
@interface SCROConnection : NSObject <NSSecureCoding> {
    id  _delegate;
    int  _handlerType;
    unsigned int  _identifier;
    struct __CFRunLoopSource { } * _invalidationSource;
    _Atomic bool  _isConnectionStarted;
    unsigned int  _pingPort;
    struct __CFRunLoopSource { } * _pingSource;
}

+ (void)_addConnectionToRunLoop:(id)arg1;
+ (void)_configServer;
+ (void)_configServerWithMachServiceName:(char *)arg1;
+ (void)_createConnectionRunLoop;
+ (void)_unconfigServerAndRetry:(bool)arg1;
+ (bool)inUnitTests;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ping;
- (void)_startConnection;
- (void)_stopConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)handlerArrayValueForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;
- (void)invalidate;
- (int)performHandlerActionForKey:(int)arg1;
- (int)registerHandlerCallbackForKey:(int)arg1;
- (int)sendEvent:(id)arg1;
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;

@end
