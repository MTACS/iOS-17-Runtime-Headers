
@interface WFMetricsManager : NSObject {
    NSString * _processName;
    NSMutableDictionary * _ssidHashes;
}

@property (nonatomic, copy) NSString *processName;
@property (nonatomic, retain) NSMutableDictionary *ssidHashes;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_submitCAEvent:(id)arg1;
- (id)init;
- (void)processEvent:(id)arg1;
- (id)processName;
- (void)setProcessName:(id)arg1;
- (void)setSsidHashes:(id)arg1;
- (id)ssidHashes;

@end
