
@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding> {
    unsigned long long  _eventOptions;
    unsigned int  _eventPort;
    unsigned long long  _globalTraceObjectID;
    const unsigned long long * _signaledValue;
}

@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;
@property unsigned long long signaledValue;
@property (readonly) bool supportsLowLatencySignalAndWait;
@property (readonly) bool supportsRollback;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)eventPort;
- (unsigned long long)globalTraceObjectID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)setSignaledValue:(unsigned long long)arg1;
- (unsigned long long)signaledValue;
- (bool)supportsLowLatencySignalAndWait;
- (bool)supportsRollback;
- (bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;

@end
