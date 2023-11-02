
@interface WebAVSampleBufferErrorListener : NSObject {
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _layers;
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _renderers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)audioRendererWasAutomaticallyFlushed:(id)arg1;
- (void)beginObservingLayer:(id)arg1;
- (void)beginObservingRenderer:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(void*)arg1;
- (void)invalidate;
- (void)layerFailedToDecode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObservingLayer:(id)arg1;
- (void)stopObservingRenderer:(id)arg1;

@end
