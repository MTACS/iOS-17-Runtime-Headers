
@protocol HMDBackingStoreObjectProtocol <NSObject>

@required

- (void)transactionObjectRemoved:(HMDBackingStoreModelObject *)arg1 message:(HMFMessage *)arg2;
- (void)transactionObjectUpdated:(HMDBackingStoreModelObject *)arg1 newValues:(HMDBackingStoreModelObject *)arg2 message:(HMFMessage *)arg3;

@end
