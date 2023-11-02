
@protocol XAMAuthorization <NSObject>

@required

- (NSData *)externalizedContext;
- (void)invalidate;

@end
