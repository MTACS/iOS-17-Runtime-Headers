
@interface MLE5ProgramLibraryOnDeviceAOTCompilationImpl : NSObject <MLE5ProgramLibraryImpl> {
    MLModelConfiguration * _configuration;
    id /* block */  _deallocator;
    struct shared_ptr<MIL::IRProgram> { 
        struct IRProgram {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _irProgram;
    NSURL * _milTextURL;
    MLModelDescription * _modelDescription;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly, copy) NSString *modelDisplayName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)configuration;
- (struct e5rt_program_library { }*)createProgramLibraryHandleWithRespecialization:(bool)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithIRProgram:(void*)arg1 modelDescription:(id)arg2 configuration:(id)arg3 deallocator:(id /* block */)arg4;
- (id)initWithMILTextAtURL:(id)arg1 irProgram:(void*)arg2 deallocator:(id /* block */)arg3 modelDescription:(id)arg4 configuration:(id)arg5;
- (id)initWithMILTextAtURL:(id)arg1 modelDescription:(id)arg2 configuration:(id)arg3;
- (id)modelDescription;
- (id)modelDisplayName;

@end
