
@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)cancelState;
+ (id)commitState;
+ (id)defaultConfiguration;
+ (id)previewState;
+ (id)revealState;

- (bool)defaultEnabled;
- (long long)requiredSupportLevel;

@end
