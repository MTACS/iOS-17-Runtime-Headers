
@interface XRFrameRing : NSObject {
    NSMutableArray * _managersBySlot;
    unsigned long long  _ringID;
    struct shared_ptr<xray::scheduler::Ring> { 
        struct Ring {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_moveToCommutator:(void*)arg1;
- (struct shared_ptr<xray::scheduler::Ring> { struct Ring {} *x1; struct __shared_weak_count {} *x2; })_parent;
- (void)_removeFromCommutator:(void*)arg1;
- (void)assignActivityManager:(id)arg1 frame:(id)arg2;
- (void)assignActivityManager:(id)arg1 slot:(unsigned char)arg2;
- (id)init;
- (id)initWithMinorFrameCount:(unsigned char)arg1;

@end
