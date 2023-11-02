
@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject> {
    NSArray * _groups;
    NSString * _keyPath;
    NSString * _name;
    NSArray * _settings;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)groupWithDictonaryRepresentation:(id)arg1 parentKeyPath:(id)arg2;
+ (id)groupsWithArrayRepresenation:(id)arg1 parentKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)groups;
- (id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3;
- (id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 parentKeyPath:(id)arg4;
- (id)keyPath;
- (id)modelsWithParentIdentifier:(id)arg1;
- (id)name;
- (id)propertyDescription;
- (id)settings;

@end
