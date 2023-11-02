
@interface SNNMILProgram : NSObject {
    struct shared_ptr<MIL::IRProgram> { 
        struct IRProgram {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _program;
}

@property (nonatomic, readonly) NSArray *functionNames;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)functionNames;
- (id)functionWithName:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)initWithProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram {} *x_1_1_1; } x1; })arg1;
- (struct shared_ptr<MIL::IRProgram> { struct IRProgram {} *x1; struct __shared_weak_count {} *x2; })milProgram;
- (id)serializeToProtobufWithError:(id*)arg1;
- (void)writeToFile:(id)arg1;

@end
