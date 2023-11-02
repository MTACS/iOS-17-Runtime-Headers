
@interface SXEmbedVideoComponent : SXComponent

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *caption;

+ (id)typeString;

- (unsigned long long)traits;

@end
