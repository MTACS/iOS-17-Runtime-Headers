
@interface HMDSettingGroupModel : HMBModel <HMDSettingGroupModelProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *hmbModelID;
@property (nonatomic, readonly) NSUUID *hmbParentModelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSString *nameForKeyPath;
@property (readonly) Class superclass;

+ (id)hmbProperties;

- (id)copyWithNewParentModelID:(id)arg1;
- (id)nameForKeyPath;

@end
