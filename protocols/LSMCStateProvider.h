
@protocol LSMCStateProvider <NSObject>

@required

- (NSSet *)allowlistedBundleIDs;
- (bool)isAllowlistEnabled;
- (NSSet *)restrictedBundleIDs;

@end
