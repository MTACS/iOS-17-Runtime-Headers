
@protocol PinnedTabsContainer <NSObject>

@required

- (NSString *)activeProfileIdentifier;
- (bool)isInDefaultProfile;
- (bool)isPrivateBrowsingEnabled;

@end
