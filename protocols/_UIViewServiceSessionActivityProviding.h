
@protocol _UIViewServiceSessionActivityProviding <NSObject>

@required

- (unsigned long long)_providerType;
- (NSUUID *)_sessionIdentifier;

@end
