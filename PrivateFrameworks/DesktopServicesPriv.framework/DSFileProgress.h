
@interface DSFileProgress : NSObject {
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { 
        struct TKeyValueObserver {} *__begin_; 
        struct TKeyValueObserver {} *__end_; 
        struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { 
            struct TKeyValueObserver {} *__value_; 
        } __end_cap_; 
    }  _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)progressChanged:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving;

@end
