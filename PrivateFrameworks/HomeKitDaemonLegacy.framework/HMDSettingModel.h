
@interface HMDSettingModel : HMBModel <HMDSettingModelProtocol>

@property (nonatomic, copy) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *hmbModelID;
@property (nonatomic, readonly) NSUUID *hmbParentModelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSString *nameForKeyPath;
@property (nonatomic, copy) NSNumber *numberValue;
@property (nonatomic, copy) NSNumber *properties;
@property (nonatomic, copy) NSUUID *selectionIdentifier;
@property (nonatomic, copy) NSString *selectionValue;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *type;

+ (id)hmbProperties;

- (id)copyWithNewParentModelID:(id)arg1;
- (id)nameForKeyPath;
- (bool)setSettingValue:(id)arg1;

@end
