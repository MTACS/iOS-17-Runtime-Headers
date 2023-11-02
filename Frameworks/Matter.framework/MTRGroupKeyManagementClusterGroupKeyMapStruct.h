
@interface MTRGroupKeyManagementClusterGroupKeyMapStruct : NSObject <NSCopying> {
    NSNumber * _fabricIndex;
    NSNumber * _groupId;
    NSNumber * _groupKeySetID;
}

@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSNumber *groupKeySetID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fabricIndex;
- (id)groupId;
- (id)groupKeySetID;
- (id)init;
- (void)setFabricIndex:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setGroupKeySetID:(id)arg1;

@end
