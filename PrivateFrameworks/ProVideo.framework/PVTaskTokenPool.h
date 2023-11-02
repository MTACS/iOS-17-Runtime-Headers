
@interface PVTaskTokenPool : NSObject {
    <PVTaskTokenPoolDelegate> * _delegate;
    unsigned long long  _tokenCounter;
    struct stack<unsigned long, std::deque<unsigned long>> { 
        struct deque<unsigned long, std::allocator<unsigned long>> { 
            struct __split_buffer<unsigned long *, std::allocator<unsigned long *>> { 
                unsigned long long **__first_; 
                unsigned long long **__begin_; 
                unsigned long long **__end_; 
                struct __compressed_pair<unsigned long **, std::allocator<unsigned long *>> { 
                    unsigned long long **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  _tokenData;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _tokenLock;
}

@property (nonatomic) <PVTaskTokenPoolDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)delegate;
- (id)getToken;
- (id)init;
- (id)initWithOffset:(unsigned long long)arg1;
- (void)returnToken:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
