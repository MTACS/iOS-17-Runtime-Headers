
@protocol FCActivityLifetimeDescribing <NSObject, NSCopying>

@required

- (NSString *)lifetimeIdentifier;
- (NSString *)lifetimeMetadata;
- (NSString *)lifetimeName;

@end
