
@interface MTRDoorLockClusterLockUserChangeEvent : NSObject <NSCopying> {
    NSNumber * _dataIndex;
    NSNumber * _dataOperationType;
    NSNumber * _fabricIndex;
    NSNumber * _lockDataType;
    NSNumber * _operationSource;
    NSNumber * _sourceNode;
    NSNumber * _userIndex;
}

@property (nonatomic, copy) NSNumber *dataIndex;
@property (nonatomic, copy) NSNumber *dataOperationType;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *lockDataType;
@property (nonatomic, copy) NSNumber *operationSource;
@property (nonatomic, copy) NSNumber *sourceNode;
@property (nonatomic, copy) NSNumber *userIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataIndex;
- (id)dataOperationType;
- (id)description;
- (id)fabricIndex;
- (id)init;
- (id)lockDataType;
- (id)operationSource;
- (void)setDataIndex:(id)arg1;
- (void)setDataOperationType:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setLockDataType:(id)arg1;
- (void)setOperationSource:(id)arg1;
- (void)setSourceNode:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (id)sourceNode;
- (id)userIndex;

@end
