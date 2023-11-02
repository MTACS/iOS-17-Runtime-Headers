
@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding> {
    NSURL * _classroomAppBundleURL;
    NSString * _instructordBundleIdentifier;
    <CRKRequestPerformingProtocol> * _studentDaemonProxy;
}

@property (nonatomic, retain) NSURL *classroomAppBundleURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *instructordBundleIdentifier;
@property (nonatomic, retain) <CRKRequestPerformingProtocol> *studentDaemonProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)classroomAppBundleURL;
- (void)fetchTransportOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 instructordBundleIdentifier:(id)arg3;
- (id)instructordBundleIdentifier;
- (void)setClassroomAppBundleURL:(id)arg1;
- (void)setInstructordBundleIdentifier:(id)arg1;
- (void)setStudentDaemonProxy:(id)arg1;
- (id)studentDaemonProxy;

@end
