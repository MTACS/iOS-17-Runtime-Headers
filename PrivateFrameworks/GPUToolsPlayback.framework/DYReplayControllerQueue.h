
@interface DYReplayControllerQueue : NSObject {
    struct queue<void (^)(), std::deque<void (^)()>>="c"{deque<void (^)(), std::allocator<void (^)()>>="__map_"{__split_buffer<void (^__strong *)(), std::allocator<void (^__strong *)()>>="__first_"^^@?"__begin_"^^@?"__end_"^^@?"__end_cap_"{__compressed_pair<void (^__strong **)(), std::allocator<void (^__strong *)()>>="__value_"^^@? {}  _blockQueue;
}

@property (nonatomic, readonly) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)count;
- (void)dequeBlock;
- (id /* block */)front;
- (id)init;
- (void)pushBlock:(id /* block */)arg1;

@end
