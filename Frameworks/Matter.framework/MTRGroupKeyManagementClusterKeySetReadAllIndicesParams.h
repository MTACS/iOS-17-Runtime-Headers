
@interface MTRGroupKeyManagementClusterKeySetReadAllIndicesParams : NSObject <NSCopying> {
    NSArray * _groupKeySetIDs;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSArray *groupKeySetIDs;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupKeySetIDs;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setGroupKeySetIDs:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
