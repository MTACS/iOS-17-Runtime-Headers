
@interface WebRootSampleBufferBoundsChangeListener : NSObject {
    struct Function<void ()>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>="__value_"^v {}  _callback;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _rootLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)begin:(id)arg1;
- (void)dealloc;
- (id)initWithCallback:(void*)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stop;

@end
