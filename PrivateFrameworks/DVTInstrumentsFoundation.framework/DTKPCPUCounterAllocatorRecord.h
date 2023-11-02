
@interface DTKPCPUCounterAllocatorRecord : NSObject {
    NSString * _counterName;
    NSString * _eventName;
    NSString * _eventOrAliasName;
    unsigned long long  _hwIdx;
    bool  _isPMI;
    struct kpep_event { } * _kpepEvent;
}

@property (nonatomic, retain) NSString *counterName;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic, retain) NSString *eventOrAliasName;
@property (nonatomic) unsigned long long hwIdx;
@property (nonatomic) bool isPMI;
@property (nonatomic) struct kpep_event { }*kpepEvent;

- (void).cxx_destruct;
- (id)counterName;
- (id)eventName;
- (id)eventOrAliasName;
- (unsigned long long)hwIdx;
- (id)initWithName:(id)arg1 nameOrAlias:(id)arg2 counterName:(id)arg3 kpepEvent:(struct kpep_event { }*)arg4 isPMI:(bool)arg5 hwIdx:(unsigned long long)arg6;
- (bool)isPMI;
- (struct kpep_event { }*)kpepEvent;
- (void)setCounterName:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setEventOrAliasName:(id)arg1;
- (void)setHwIdx:(unsigned long long)arg1;
- (void)setIsPMI:(bool)arg1;
- (void)setKpepEvent:(struct kpep_event { }*)arg1;

@end
