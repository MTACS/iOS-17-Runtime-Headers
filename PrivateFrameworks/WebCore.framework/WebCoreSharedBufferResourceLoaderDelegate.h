
@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    bool  _complete;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  _dataLock;
    long long  _expectedContentSize;
    void * _parent;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _requests;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canFulfillRequest:(id)arg1;
- (id)data;
- (void)enqueueRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (void)fulfillRequest:(id)arg1;
- (id)initWithParent:(void*)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setExpectedContentSize:(long long)arg1;
- (void)updateData:(id)arg1 complete:(bool)arg2;

@end
