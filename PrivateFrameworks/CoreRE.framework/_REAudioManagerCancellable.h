
@interface _REAudioManagerCancellable : NSObject {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancelled;
}

@property (getter=isCancelled, readonly) bool cancelled;

- (void)cancel;
- (id)init;
- (bool)isCancelled;

@end
