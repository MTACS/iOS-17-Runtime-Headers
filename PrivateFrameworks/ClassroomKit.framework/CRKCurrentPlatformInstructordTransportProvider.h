
@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding> {
    NSURL * _classroomAppBundleURL;
    NSString * _instructordBundleIdentifier;
    <CRKTransportProviding> * mBaseProvider;
}

@property (nonatomic, retain) NSURL *classroomAppBundleURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *instructordBundleIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)classroomAppBundleURL;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 instructordBundleIdentifier:(id)arg3;
- (id)instructordBundleIdentifier;
- (id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg1;
- (void)setClassroomAppBundleURL:(id)arg1;
- (void)setInstructordBundleIdentifier:(id)arg1;

@end
