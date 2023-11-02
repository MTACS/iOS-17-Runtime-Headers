
@interface MNAudioSystemEventQueue : NSObject {
    unsigned long long  _capacity;
    NSMutableArray * _container;
    <MNAudioEventQueueDelegate> * _delegate;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) <MNAudioEventQueueDelegate> *delegate;
@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) bool full;

- (void).cxx_destruct;
- (id)_dequeue;
- (void)_enqueue:(id)arg1;
- (void)_removeEventsMatching:(id)arg1;
- (unsigned long long)capacity;
- (void)clear;
- (unsigned long long)count;
- (id)delegate;
- (id)dequeue;
- (bool)empty;
- (bool)enqueue:(id)arg1 withOptions:(unsigned long long)arg2 andReport:(out id*)arg3;
- (bool)full;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end
