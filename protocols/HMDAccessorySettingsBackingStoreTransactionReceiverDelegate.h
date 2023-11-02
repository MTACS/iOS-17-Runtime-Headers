
@protocol HMDAccessorySettingsBackingStoreTransactionReceiverDelegate

@required

- (void)handleRemovedGroupModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAccessorySettingGroupModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleRemovedSettingConstraintModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAccessorySettingConstraintModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleRemovedSettingModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAccessorySettingModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleUpdatedGroupModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAccessorySettingGroupModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleUpdatedSettingConstraintModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAccessorySettingConstraintModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleUpdatedSettingModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: HMDAccessorySettingModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, HMDAccessorySetting *, void*

@end
