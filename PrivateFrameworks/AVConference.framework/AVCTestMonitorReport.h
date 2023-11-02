
@interface AVCTestMonitorReport : NSObject {
    unsigned long long  _initialMemoryUsageMB;
    unsigned long long  _memoryUsageMB;
    unsigned long long  _networkAgentRefCount;
}

@property (nonatomic) unsigned long long initialMemoryUsageMB;
@property (nonatomic) unsigned long long memoryUsageMB;
@property (nonatomic) unsigned long long networkAgentRefCount;

- (unsigned long long)initialMemoryUsageMB;
- (unsigned long long)memoryUsageMB;
- (unsigned long long)networkAgentRefCount;
- (void)setInitialMemoryUsageMB:(unsigned long long)arg1;
- (void)setMemoryUsageMB:(unsigned long long)arg1;
- (void)setNetworkAgentRefCount:(unsigned long long)arg1;

@end
