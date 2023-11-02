
@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _displayLayer;
    struct ThreadSafeWeakPtr<WebCore::LocalSampleBufferDisplayLayer> { 
        struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { 
            struct ThreadSafeWeakPtrControlBlock {} *m_ptr; 
        } m_controlBlock; 
        struct LocalSampleBufferDisplayLayer {} *m_objectOfCorrectType; 
    }  _parent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)begin:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(void*)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stop;

@end
