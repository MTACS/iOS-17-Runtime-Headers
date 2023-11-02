
@protocol UNNotificationSecurityScopeProviding <NSObject>

@required

- (void)addSecurityScope:(NSString *)arg1;
- (void)enterSecurityScope;
- (void)leaveSecurityScope;
- (void)removeSecurityScope;

@end
