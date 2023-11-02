
@interface MTRGroupKeyManagementClusterKeySetWriteParams : NSObject <NSCopying> {
    MTRGroupKeyManagementClusterGroupKeySetStruct * _groupKeySet;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupKeySet;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setGroupKeySet:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
