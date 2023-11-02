
@interface HMDSyncOperationOptions : HMFObject {
    bool  _cloudConflict;
    bool  _delayRespected;
    unsigned long long  _operationType;
    NSString * _zoneName;
}

@property (getter=isCloudConflict, nonatomic) bool cloudConflict;
@property (getter=isDelayRespected, nonatomic) bool delayRespected;
@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly) NSString *zoneName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 cloudConflict:(bool)arg3 delayRespected:(bool)arg4;
- (id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 delayRespected:(bool)arg3;
- (bool)isCloudConflict;
- (bool)isDelayRespected;
- (unsigned long long)operationType;
- (void)setCloudConflict:(bool)arg1;
- (void)setDelayRespected:(bool)arg1;
- (id)zoneName;

@end
