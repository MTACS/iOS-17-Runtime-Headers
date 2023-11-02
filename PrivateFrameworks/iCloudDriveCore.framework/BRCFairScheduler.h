
@interface BRCFairScheduler : NSObject {
    unsigned long long  _lastVisitedBit;
    unsigned long long  _maxRegistedSourceBit;
    NSString * _name;
    bool  _resumed;
    NSObject<OS_dispatch_source> * _source;
    NSMutableDictionary * _sourceForBitIndex;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (void)addSource:(id)arg1;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (id)initWithWorkloop:(id)arg1 name:(id)arg2;
- (void)resume;
- (void)schedule;
- (void)signalSourceForBitIndex:(unsigned long long)arg1;
- (id)sourceForBitIndex:(unsigned long long)arg1;
- (void)suspend;
- (void)unregisterSources;
- (id)workloop;

@end
