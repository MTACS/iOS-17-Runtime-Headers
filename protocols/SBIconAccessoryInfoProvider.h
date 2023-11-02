
@protocol SBIconAccessoryInfoProvider <NSObject>

@required

- (SBIconContinuityItem *)continuityItem;
- (bool)isHighlighted;
- (NSString *)location;
- (<NSCopying> *)overrideBadgeNumberOrString;

@end
