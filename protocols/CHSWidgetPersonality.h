
@protocol CHSWidgetPersonality <NSObject>

@required

- (NSString *)extensionBundleIdentifier;
- (NSString *)kind;
- (bool)matchesPersonality:(id <CHSWidgetPersonality>)arg1;

@end
