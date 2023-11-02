
@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject <AEPerformancePrimitivesInFlightInterval> {
    bool  _isEnded;
    NSObject<OS_os_log> * _log;
    NSString * _name;
    unsigned long long  _signpostID;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)endInterval;

@end
