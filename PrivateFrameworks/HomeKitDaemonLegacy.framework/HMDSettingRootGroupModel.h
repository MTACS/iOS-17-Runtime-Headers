
@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>

@property (nonatomic, copy) NSUUID *conflictResolutionToken;

+ (id)hmbProperties;

- (id)copyWithNewParentModelID:(id)arg1;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;
- (id)nameForKeyPath;

@end
