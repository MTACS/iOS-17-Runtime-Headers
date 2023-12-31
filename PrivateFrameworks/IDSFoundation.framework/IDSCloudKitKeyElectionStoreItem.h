
@interface IDSCloudKitKeyElectionStoreItem : NSObject {
    ENGroupID * _groupID;
    NSString * _groupName;
}

@property (nonatomic, retain) ENGroupID *groupID;
@property (nonatomic, retain) NSString *groupName;

- (void).cxx_destruct;
- (id)description;
- (id)groupID;
- (id)groupName;
- (void)setGroupID:(id)arg1;
- (void)setGroupName:(id)arg1;

@end
