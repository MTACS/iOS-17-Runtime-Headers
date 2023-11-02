
@interface ETOpaqueCopy : NSObject {
    struct shared_ptr<Espresso::abstract_blob_container> { 
        struct abstract_blob_container {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  blob;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)getBlob;
- (id)initWithAbstractBlobContainer:(void*)arg1;

@end
