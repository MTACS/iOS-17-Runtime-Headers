
@protocol DTGPUDataSourceDelegate <NSObject>

@required

- (void)readyToSendData:(const unsigned long long*)arg1 sampleCount:(unsigned long long)arg2 length:(unsigned long long)arg3 dataSource:(DTGPUDataSource *)arg4 sampleType:(unsigned long long)arg5 ringBufferIndex:(unsigned int)arg6 sourceIndex:(unsigned int)arg7;

@end
