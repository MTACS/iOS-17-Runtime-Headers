
@protocol HFAccessoryProfileVendor <HFAccessoryVendor, HFServiceVendor>

@required

- (NSSet *)profiles;

@end
