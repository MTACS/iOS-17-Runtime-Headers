
@protocol HFSiriLanguageOptionsManagerObserver <NSObject>

@optional

- (void)siriLanguageOptionsManager:(HFSiriLanguageOptionsManager *)arg1 availableLanguageOptionsDidChange:(NSSet *)arg2;
- (void)siriLanguageOptionsManager:(HFSiriLanguageOptionsManager *)arg1 selectedLanguageOptionDidChange:(HFSiriLanguageOption *)arg2;

@end
