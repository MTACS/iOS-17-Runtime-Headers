
@interface MTRGroupsClusterAddGroupIfIdentifyingParams : NSObject <NSCopying> {
    NSNumber * _groupID;
    NSString * _groupName;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupID;
- (id)groupId;
- (id)groupName;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setGroupID:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
