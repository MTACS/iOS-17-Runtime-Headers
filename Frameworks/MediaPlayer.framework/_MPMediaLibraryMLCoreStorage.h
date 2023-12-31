
@interface _MPMediaLibraryMLCoreStorage : NSObject {
    struct shared_ptr<mlcore::DeviceLibrary> { 
        struct DeviceLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  __MediaLibrary_coreLibrary;
}

@property (nonatomic) struct shared_ptr<mlcore::DeviceLibrary> { struct DeviceLibrary {} *x1; struct __shared_weak_count {} *x2; } _MediaLibrary_coreLibrary;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::DeviceLibrary> { struct DeviceLibrary {} *x1; struct __shared_weak_count {} *x2; })_MediaLibrary_coreLibrary;
- (void)set_MediaLibrary_coreLibrary:(struct shared_ptr<mlcore::DeviceLibrary> { struct DeviceLibrary {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
