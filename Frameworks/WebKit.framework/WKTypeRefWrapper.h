
@interface WKTypeRefWrapper : NSObject {
    struct WKRetainPtr<const void *> { 
        void *m_ptr; 
    }  _object;
}

@property (readonly) void*object;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithObject:(void*)arg1;
- (void*)object;

@end
