
@interface _REAudioManagerAsyncListenerUpdater : NSObject {
    unsigned long long  _cumulativeUpdateCount;
    int  _droppedUpdates;
    NSObject<OS_dispatch_group> * _group;
    double  _maxUpdateLatency;
    NSObject<OS_dispatch_queue> * _queue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _quitting;
    struct OpaqueFigSTS { } * _sts;
    double  _totalLatency;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _updateCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSTS:(struct OpaqueFigSTS { }*)arg1;
- (void)updateListenerTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
