
@protocol SBSHomeScreenServiceServerToClientInterface

@required

- (oneway void)applicationIconInfoChangedForBundleIdentifiers:(SBSHomeScreenServiceArrayOfStrings *)arg1;
- (oneway void)homeScreenLayoutAvailabilityDidChange:(NSNumber *)arg1;
- (oneway void)homeScreenLayoutDidChange;
- (oneway void)installedWebClipsDidChange;

@end
