
@protocol PSGResponseSuggestionsExpConfigProtocol <PSGExpConfigProtocol>

@required

- (NSString *)espressoBinFilePath;
- (NSString *)inferenceModelConfigPath;
- (NSString *)inferenceModelFilePath;
- (bool)isMLModelEnabled;
- (NSString *)language;
- (NSString *)treatmentName;
- (NSString *)vocabFilePath;

@end
