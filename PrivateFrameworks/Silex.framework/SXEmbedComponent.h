
@interface SXEmbedComponent : SXComponent

@property (nonatomic, readonly) NSString *embedType;
@property (nonatomic, readonly) NSString *resourceIdentifier;

- (unsigned long long)traits;

@end
