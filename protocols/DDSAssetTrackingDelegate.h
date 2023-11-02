
@protocol DDSAssetTrackingDelegate <NSObject>

@required

- (void)handleAddedNewDescriptor:(DDSAssertDescriptor *)arg1 forAssertion:(DDSAssertion *)arg2;
- (void)handleNewAssertions:(NSSet *)arg1;
- (void)handleRemovedAssertions:(NSSet *)arg1;

@end
