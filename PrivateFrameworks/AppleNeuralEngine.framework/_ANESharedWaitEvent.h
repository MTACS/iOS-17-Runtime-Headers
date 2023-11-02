
@interface _ANESharedWaitEvent : NSObject {
    unsigned long long  _eventType;
    IOSurfaceSharedEvent * _sharedEvent;
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long value;

+ (id)new;
+ (id)waitEventWithValue:(unsigned long long)arg1 sharedEvent:(id)arg2;
+ (id)waitEventWithValue:(unsigned long long)arg1 sharedEvent:(id)arg2 eventType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)eventType;
- (id)init;
- (id)initWithValue:(unsigned long long)arg1 sharedEvent:(id)arg2 eventType:(unsigned long long)arg3;
- (void)setValue:(unsigned long long)arg1;
- (id)sharedEvent;
- (unsigned long long)value;

@end
