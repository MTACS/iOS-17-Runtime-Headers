
@protocol JFXEffectContentDataSource <NSObject>

@required

- (unsigned long long)contentAvailability;
- (NSString *)contentVersion;
- (bool)isContentAvailable;
- (bool)isContentNew;
- (NSString *)localizedAccessibilityName;
- (NSString *)localizedDisplayName;
- (NSNumber *)requiredProVideoVersion;

@end
