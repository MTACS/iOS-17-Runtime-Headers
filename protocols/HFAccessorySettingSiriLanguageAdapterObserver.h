
@protocol HFAccessorySettingSiriLanguageAdapterObserver <NSObject>

@optional

- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 availableLanguageOptionsDidChange:(NSSet *)arg2;
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 selectedLanguageOptionDidChange:(HFSiriLanguageOption *)arg2;

@end
