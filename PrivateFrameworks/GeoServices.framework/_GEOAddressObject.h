
@interface _GEOAddressObject : NSObject {
    struct shared_ptr<addr_obj::AddressObject> { 
        struct AddressObject {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _addrObjPtr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
