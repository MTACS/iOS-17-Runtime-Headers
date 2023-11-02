
@protocol SFPeopleSuggestion <NSObject, NSSecureCoding>

@required

- (NSArray *)contacts;
- (NSString *)deviceModelIdentifier;
- (NSString *)displayName;
- (INImage *)donatedImage;
- (NSArray *)formattedHandles;
- (NSString *)identifier;
- (bool)isGroup;
- (bool)isPlaceholder;
- (bool)isRestricted;
- (bool)isTapToRadar;
- (NSString *)transportBundleIdentifier;

@end
