
@interface MapsSuggestionsGCDTimer : MapsSuggestionsBaseTrigger <MapsSuggestionsTimer> {
    struct Timer { 
        struct Queue { 
            NSObject<OS_dispatch_queue> *_innerQueue; 
            NSString *_name; 
        } _queue; 
        NSString *_name; 
        NSObject<OS_dispatch_source> *_timer; 
        struct { 
            NSDate *firesAt; 
        } _state; 
    }  _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)objectForJSON;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg2;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 repeatAfter:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg2 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg3;
- (void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2;
- (void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3;
- (id)uniqueName;
- (void)unschedule;

@end
