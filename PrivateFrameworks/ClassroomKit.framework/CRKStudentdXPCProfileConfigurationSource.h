
@interface CRKStudentdXPCProfileConfigurationSource : NSObject <CRKConfigurationSource> {
    CRKNonCatalystStudentDaemonProxy * _studentDaemonProxy;
    NSObject<OS_dispatch_queue> * mCallbackQueue;
    <CRKConfigurationSource> * mPlaceholderFileConfigurationSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CRKNonCatalystStudentDaemonProxy *studentDaemonProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchConfiguration:(id /* block */)arg1;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (bool)isStudentdInstalled;
- (void)setConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)studentDaemonProxy;

@end
