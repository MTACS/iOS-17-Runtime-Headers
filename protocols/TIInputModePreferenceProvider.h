
@protocol TIInputModePreferenceProvider

@required

- (NSArray *)defaultEnabledInputModesForCurrentLocale;
- (NSArray *)enabledInputModeIdentifiers;

@end
