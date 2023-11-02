
@protocol HMDSettingTransactionReceiverProtocol <NSObject>

@required

- (void)transactionSettingConstraintModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMDSettingConstraintModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)transactionSettingConstraintModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HMDSettingConstraintModelProtocol> *, <HMDSettingConstraintModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)transactionSettingGroupModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMDSettingGroupModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)transactionSettingGroupModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HMDSettingGroupModelProtocol> *, <HMDSettingGroupModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)transactionSettingModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMDSettingModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)transactionSettingModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HMDSettingModelProtocol> *, <HMDSettingModelProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*

@end
