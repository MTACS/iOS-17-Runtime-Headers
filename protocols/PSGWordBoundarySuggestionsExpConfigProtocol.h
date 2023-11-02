
@protocol PSGWordBoundarySuggestionsExpConfigProtocol <PSGExpConfigProtocol>

@required

- (NSString *)espressoBinFilePath;
- (NSString *)inferenceModelConfigPath;
- (bool)isMLModelEnabled;

@end
