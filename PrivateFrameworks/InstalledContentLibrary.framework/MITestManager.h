
@interface MITestManager : NSObject {
    NSMutableDictionary * _sourceForPID;
    unsigned long long  _testFlags;
    NSObject<OS_dispatch_queue> * _testModeQueue;
}

@property (nonatomic, retain) NSMutableDictionary *sourceForPID;
@property (nonatomic) unsigned long long testFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *testModeQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_onQueue_clearIsRunningInTestModeForProcessWithPID:(int)arg1 withError:(id*)arg2;
- (void)_onQueue_clearTestFlags:(unsigned long long)arg1;
- (bool)_onQueue_setIsRunningInTestModeForProcessWithPID:(int)arg1 withError:(id*)arg2;
- (void)_onQueue_setTestFlags:(unsigned long long)arg1;
- (id)_testModeSentinelURL;
- (bool)clearIsRunningInTestModeForProcessWithPID:(int)arg1 withError:(id*)arg2;
- (void)clearTestFlags:(unsigned long long)arg1;
- (id)init;
- (bool)isRunningInTestMode:(bool*)arg1 outError:(id*)arg2;
- (bool)setIsRunningInTestModeForProcessWithPID:(int)arg1 withError:(id*)arg2;
- (void)setSourceForPID:(id)arg1;
- (void)setTestFlags:(unsigned long long)arg1;
- (void)setTestModeQueue:(id)arg1;
- (id)sourceForPID;
- (unsigned long long)testFlags;
- (bool)testFlagsAreSet:(unsigned long long)arg1;
- (id)testModeQueue;

@end
