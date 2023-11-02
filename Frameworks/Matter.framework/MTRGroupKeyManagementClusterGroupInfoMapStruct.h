
@interface MTRGroupKeyManagementClusterGroupInfoMapStruct : NSObject <NSCopying> {
    NSArray * _endpoints;
    NSNumber * _fabricIndex;
    NSNumber * _groupId;
    NSString * _groupName;
}

@property (nonatomic, copy) NSArray *endpoints;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSString *groupName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoints;
- (id)fabricIndex;
- (id)groupId;
- (id)groupName;
- (id)init;
- (void)setEndpoints:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setGroupName:(id)arg1;

@end
