
@interface MLE5ProgramLibraryE5BundleImpl : NSObject <MLE5ProgramLibraryImpl> {
    NSURL * _e5BundleURL;
    NSString * _modelDisplayName;
}

@property (nonatomic, readonly) NSURL *e5BundleURL;
@property (nonatomic, readonly, copy) NSString *modelDisplayName;

- (void).cxx_destruct;
- (struct e5rt_program_library { }*)createProgramLibraryHandleWithRespecialization:(bool)arg1 error:(id*)arg2;
- (id)e5BundleURL;
- (id)initWithE5BundleAtURL:(id)arg1 modelDisplayName:(id)arg2;
- (id)modelDisplayName;

@end
