
@protocol SWSetupTask <NSObject>

@required

- (NSString *)identifier;
- (void)performSetup;

@end
