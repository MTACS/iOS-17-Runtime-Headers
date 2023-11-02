
@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor> {
    SUDownload * _download;
    SUInstallOptions * _installOptions;
    NSObject<OS_dispatch_queue> * _queue;
    <SUInstallationConstraintMonitorDelegate> * _queue_delegate;
    unsigned long long  _representedConstraints;
}

@property (nonatomic) <SUInstallationConstraintMonitorDelegate> *delegate;
@property (nonatomic, readonly, retain) SUDownload *download;
@property (nonatomic, readonly, retain) SUInstallOptions *installOptions;
@property (nonatomic, readonly) unsigned long long representedConstraints;
@property (nonatomic, readonly) unsigned long long unsatisfiedConstraints;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)download;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 andInstallOptions:(id)arg3;
- (id)initOnQueue:(id)arg1 withRepresentedInstallationConstraints:(unsigned long long)arg2 andDownload:(id)arg3;
- (id)initOnQueue:(id)arg1 withRepresentedInstallationConstraints:(unsigned long long)arg2 andDownload:(id)arg3 andInstallOptions:(id)arg4;
- (id)installOptions;
- (bool)isSatisfied;
- (unsigned long long)representedConstraints;
- (void)setDelegate:(id)arg1;
- (unsigned long long)unsatisfiedConstraints;
- (unsigned long long)unsatisfiedConstraintsWithIgnorableConstraints:(unsigned long long)arg1;

@end
