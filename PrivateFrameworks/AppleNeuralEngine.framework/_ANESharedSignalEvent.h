
@interface _ANESharedSignalEvent : NSObject <NSSecureCoding> {
    unsigned long long  _agentMask;
    long long  _eventType;
    IOSurfaceSharedEvent * _sharedEvent;
    unsigned int  _symbolIndex;
    unsigned long long  _value;
}

@property (nonatomic) unsigned long long agentMask;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic, readonly) unsigned int symbolIndex;
@property (nonatomic) unsigned long long value;

+ (id)new;
+ (id)signalEventWithValue:(unsigned long long)arg1 symbolIndex:(unsigned int)arg2 eventType:(long long)arg3 sharedEvent:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)agentMask;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(unsigned long long)arg1 symbolIndex:(unsigned int)arg2 eventType:(long long)arg3 sharedEvent:(id)arg4 agentMask:(unsigned long long)arg5;
- (void)setAgentMask:(unsigned long long)arg1;
- (void)setValue:(unsigned long long)arg1;
- (id)sharedEvent;
- (unsigned int)symbolIndex;
- (unsigned long long)value;
- (id)waitEvent;

@end
