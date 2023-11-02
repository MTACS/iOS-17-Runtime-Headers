
@interface XRFrameCommutator : NSObject {
    struct unique_ptr<xray::scheduler::Commutator, std::default_delete<xray::scheduler::Commutator>> { 
        struct __compressed_pair<xray::scheduler::Commutator *, std::default_delete<xray::scheduler::Commutator>> { 
            struct Commutator {} *__value_; 
        } __ptr_; 
    }  _commutatorImpl;
}

+ (id)sharedCommutator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRing:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMinorFrameCount:(unsigned char)arg1;
- (id)newRing;
- (void)observedTopOfMajorFrame;
- (void)removeRing:(id)arg1;
- (void)setPeriod:(unsigned long long)arg1;
- (void)start;
- (void)stop;

@end
