
@interface WKDragSessionContext : NSObject {
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    }  _temporaryDirectories;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTemporaryDirectory:(id)arg1;
- (void)cleanUpTemporaryDirectories;

@end
