
@interface MapsSuggestionsCanKicker : NSObject <MapsSuggestionsObject> {
    id /* block */  _block;
    unsigned long long  _count;
    double  _leeway;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _targetQueue;
    double  _time;
    MapsSuggestionsGCDTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)initWithName:(id)arg1 time:(double)arg2 leeway:(double)arg3 queue:(id)arg4 block:(id /* block */)arg5;
- (id)initWithName:(id)arg1 time:(double)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)kickCanBySameTime;
- (void)kickCanByTime:(double)arg1;
- (id)uniqueName;

@end
