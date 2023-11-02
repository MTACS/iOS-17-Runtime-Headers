
@interface HMDSettingConstraintModel : HMBModel <HMDSettingConstraintModelProtocol>

@property (nonatomic, copy) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *hmbModelID;
@property (nonatomic, readonly) NSUUID *hmbParentModelID;
@property (nonatomic, readonly) NSString *nameForKeyPath;
@property (nonatomic, copy) NSNumber *numberValue;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *type;

+ (id)hmbProperties;

- (id)copyWithNewParentModelID:(id)arg1;
- (id)nameForKeyPath;

@end
