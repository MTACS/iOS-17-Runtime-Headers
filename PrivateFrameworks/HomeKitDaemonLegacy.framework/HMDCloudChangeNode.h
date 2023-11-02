
@interface HMDCloudChangeNode : HMFObject {
    HMDCloudChange * _change;
    NSMapTable * _children;
    bool  _forceDelete;
    bool  _orphaned;
    HMDCloudChangeNode * _parent;
    NSUUID * _parentUuid;
    NSString * _recordName;
    NSString * _type;
    NSUUID * _uuid;
}

@property (nonatomic, retain) HMDCloudChange *change;
@property (nonatomic, retain) NSMapTable *children;
@property (nonatomic, readonly) bool forceDelete;
@property (nonatomic, readonly) bool orphaned;
@property (nonatomic) HMDCloudChangeNode *parent;
@property (nonatomic, copy) NSUUID *parentUuid;
@property (nonatomic, copy) NSString *recordName;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)_allNodesInBranch;
- (id)_initWithUUID:(id)arg1 parentUUID:(id)arg2 recordName:(id)arg3 type:(id)arg4 change:(id)arg5;
- (void)_markBranchOrphaned;
- (void)_updateWithChange:(id)arg1;
- (void)_updateWithCloudRecord:(id)arg1;
- (void)_updateWithModel:(id)arg1;
- (void)addChild:(id)arg1;
- (id)change;
- (id)children;
- (void)deleteChildren;
- (id)description;
- (bool)forceDelete;
- (id)init;
- (id)initWithChange:(id)arg1;
- (id)initWithCloudRecord:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithRecordMapping:(id)arg1;
- (void)logChangeTreeWithIndent:(id)arg1;
- (bool)orphaned;
- (id)parent;
- (id)parentUuid;
- (id)recordName;
- (void)removeChild:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentUuid:(id)arg1;
- (void)setRecordName:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)shortDescription;
- (id)type;
- (void)updateRecordMapping:(id)arg1;
- (id)uuid;

@end
