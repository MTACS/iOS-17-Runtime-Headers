
@interface SPRProvider : SPRObject {
    long long  _maxConfiguratorInstance;
    long long  _maxMonitorInstance;
    long long  _maxReaderInstance;
}

@property (nonatomic, readonly) long long maxConfiguratorInstance;
@property (nonatomic, readonly) long long maxMonitorInstance;
@property (nonatomic, readonly) long long maxReaderInstance;

+ (id)shared;

- (id)makeConfiguratorAndReturnError:(id*)arg1;
- (id)makeMonitorAndReturnError:(id*)arg1;
- (id)makePINControllerAndReturnError:(id*)arg1;
- (id)makeReaderAndReturnError:(id*)arg1;
- (long long)maxConfiguratorInstance;
- (long long)maxMonitorInstance;
- (long long)maxReaderInstance;

@end
