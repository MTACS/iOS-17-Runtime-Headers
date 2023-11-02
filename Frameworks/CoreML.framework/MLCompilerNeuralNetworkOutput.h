
@interface MLCompilerNeuralNetworkOutput : NSObject {
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _network;
    struct shared_ptr<MIL::IRProgram> { 
        struct IRProgram {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _program;
}

@property (nonatomic, readonly) struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } network;
@property (nonatomic, readonly) struct shared_ptr<MIL::IRProgram> { struct IRProgram {} *x1; struct __shared_weak_count {} *x2; } program;

+ (id)outputWithEspressoNetwork:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
+ (id)outputWithMILProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram {} *x_1_1_1; } x1; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEspressoNetwork:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithMILProgram:(struct shared_ptr<MIL::IRProgram> { struct IRProgram {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })network;
- (struct shared_ptr<MIL::IRProgram> { struct IRProgram {} *x1; struct __shared_weak_count {} *x2; })program;

@end
