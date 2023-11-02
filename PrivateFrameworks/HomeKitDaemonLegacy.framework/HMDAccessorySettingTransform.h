
@interface HMDAccessorySettingTransform : NSObject

+ (void)changeAccessorySettingType:(id)arg1 home:(id)arg2;
+ (id)mergeWithGroupMetadata:(id)arg1 group:(id)arg2;
+ (id)modelForGroup:(id)arg1;
+ (id)modelForSetting:(id)arg1;
+ (id)modelForSetting:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;
+ (id)modelsForChangedConstraints:(id)arg1 fromSetting:(id)arg2;
+ (id)modelsForGroup:(id)arg1;
+ (id)modelsForGroupDiff:(id)arg1 fromGroup:(id)arg2;
+ (id)modelsForSetting:(id)arg1;
+ (id)modelsForSettingDiff:(id)arg1 fromSetting:(id)arg2;

@end
