
@interface MLLayerExecutionSchedule : NSObject {
    long long  _layerError;
    long long  _layerIndex;
    NSString * _layerName;
    NSString * _layerTypeName;
    unsigned long long  _preferredComputeUnit;
    NSDictionary * _supportMessagesPerComputeUnit;
    unsigned long long  _supportedComputeUnits;
}

@property (nonatomic, readonly) long long layerError;
@property (nonatomic, readonly) long long layerIndex;
@property (nonatomic, readonly, copy) NSString *layerName;
@property (nonatomic, readonly, copy) NSString *layerTypeName;
@property (nonatomic, readonly) unsigned long long preferredComputeUnit;
@property (nonatomic, readonly, copy) NSDictionary *supportMessagesPerComputeUnit;
@property (nonatomic, readonly) unsigned long long supportedComputeUnits;

- (void).cxx_destruct;
- (id)initWithComputeUnits:(unsigned long long)arg1 layerName:(id)arg2 layerError:(long long)arg3 layerTypeName:(id)arg4 supportedComputeUnits:(unsigned long long)arg5 layerIndex:(long long)arg6;
- (id)initWithComputeUnits:(unsigned long long)arg1 layerName:(id)arg2 layerError:(long long)arg3 layerTypeName:(id)arg4 supportedComputeUnits:(unsigned long long)arg5 layerIndex:(long long)arg6 supportMessages:(id)arg7;
- (id)initWithLayerError:(long long)arg1;
- (long long)layerError;
- (long long)layerIndex;
- (id)layerName;
- (id)layerTypeName;
- (unsigned long long)preferredComputeUnit;
- (id)supportMessagesPerComputeUnit;
- (unsigned long long)supportedComputeUnits;

@end
