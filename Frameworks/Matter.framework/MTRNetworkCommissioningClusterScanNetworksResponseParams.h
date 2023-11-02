
@interface MTRNetworkCommissioningClusterScanNetworksResponseParams : NSObject <NSCopying> {
    NSString * _debugText;
    NSNumber * _networkingStatus;
    NSArray * _threadScanResults;
    NSNumber * _timedInvokeTimeoutMs;
    NSArray * _wiFiScanResults;
}

@property (nonatomic, copy) NSString *debugText;
@property (nonatomic, copy) NSNumber *networkingStatus;
@property (nonatomic, copy) NSArray *threadScanResults;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSArray *wiFiScanResults;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugText;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)networkingStatus;
- (void)setDebugText:(id)arg1;
- (void)setNetworkingStatus:(id)arg1;
- (void)setThreadScanResults:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setWiFiScanResults:(id)arg1;
- (id)threadScanResults;
- (id)timedInvokeTimeoutMs;
- (id)wiFiScanResults;

@end
