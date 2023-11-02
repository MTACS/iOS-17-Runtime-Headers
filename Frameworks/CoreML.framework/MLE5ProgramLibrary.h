
@interface MLE5ProgramLibrary : NSObject {
    <MLE5ProgramLibraryImpl> * _impl;
    NSObject<OS_dispatch_queue> * _lazyInitQueue;
    MLModelConfiguration * _modelConfiguration;
    struct e5rt_program_library { } * _programLibraryHandle;
}

@property (nonatomic, readonly) <MLE5ProgramLibraryImpl> *impl;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lazyInitQueue;
@property (nonatomic, readonly) MLModelConfiguration *modelConfiguration;
@property (nonatomic, readonly, copy) NSString *modelDisplayName;

- (void).cxx_destruct;
- (struct e5rt_program_library { }*)_programLibraryHandleWithForceRespecialization:(bool)arg1 error:(id*)arg2;
- (struct e5rt_execution_stream_operation { }*)createOperationForFunctionName:(id)arg1 forceRespecialization:(bool)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)impl;
- (id)initWithE5BundleAtURL:(id)arg1 modelDisplayName:(id)arg2;
- (id)initWithIRProgram:(void*)arg1 modelDescription:(id)arg2 configuration:(id)arg3 deallocator:(id /* block */)arg4;
- (id)initWithImpl:(id)arg1 configuration:(id)arg2;
- (id)initWithMILTextAtURL:(id)arg1 modelDescription:(id)arg2 configuration:(id)arg3;
- (id)lazyInitQueue;
- (id)modelConfiguration;
- (id)modelDisplayName;
- (bool)prepareAndReturnError:(id*)arg1;
- (id)segmentationAnalyticsAndReturnError:(id*)arg1;

@end
