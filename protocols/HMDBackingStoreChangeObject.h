
@protocol HMDBackingStoreChangeObject <NSObject>

@required

- (HMDBackingStoreModelObject *)change;
- (NSSet *)dependentUUIDs;

@end
