
@interface SXAudioComponent : SXComponent

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) NSString *stillImageIdentifier;

+ (id)typeString;

- (unsigned long long)traits;

@end
