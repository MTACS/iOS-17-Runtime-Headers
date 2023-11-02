
@interface HFMutablePriorityQueueEntry : NSObject {
    unsigned long long  _priority;
    id  _value;
}

@property (nonatomic) unsigned long long priority;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 priority:(long long)arg2;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (id)value;

@end
