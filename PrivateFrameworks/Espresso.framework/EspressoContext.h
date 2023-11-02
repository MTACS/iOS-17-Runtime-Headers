
@interface EspressoContext : NSObject {
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ctx;
}

@property (readonly) struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; } ctx;
@property (readonly) int platform;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })ctx;
- (id)initWithContext:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithDevice:(id)arg1 andWisdomParams:(id)arg2;
- (id)initWithNetworkContext:(id)arg1;
- (id)initWithPlatform:(int)arg1;
- (int)platform;
- (void)set_priority:(bool)arg1 low_priority_max_ms_per_command_buffer:(float)arg2 gpu_priority:(unsigned int)arg3;

@end
