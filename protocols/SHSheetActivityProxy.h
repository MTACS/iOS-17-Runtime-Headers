
@protocol SHSheetActivityProxy <SHSheetProxy>

@required

- (SFProxyText *)activityTitle;
- (NSString *)applicationBundleIdentifier;
- (unsigned int)iconImageSlotID;

@end
