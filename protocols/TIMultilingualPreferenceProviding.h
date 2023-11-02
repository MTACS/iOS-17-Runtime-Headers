
@protocol TIMultilingualPreferenceProviding <NSObject>

@required

- (TIInputMode *)preferredSecondaryInputMode;
- (NSArray *)userEnabledInputModes;
- (NSArray *)userPreferredLanguages;

@end
