
@interface SXImageComponent : SXComponent

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSAttributedString *captionWithLocalizedRoleForSpeaking;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) bool shouldBeExposedToAssistiveTechnology;
@property (nonatomic, readonly) bool userControllable;

+ (id)typeString;

- (id)captionWithLocalizedRoleForSpeaking;
- (bool)shouldBeExposedToAssistiveTechnology;
- (unsigned long long)traits;

@end
