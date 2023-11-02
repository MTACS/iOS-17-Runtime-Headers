
@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject> {
    HMDAccessorySettingGroupMetadata * _rootGroup;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMDAccessorySettingGroupMetadata *rootGroup;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)propertyDescription;
- (id)rootGroup;

@end
