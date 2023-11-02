
@protocol CardDAVDelegateInfoProvider <NSObject>

@required

- (NSArray *)collectDelegatesForAccount:(ACAccount *)arg1 error:(id*)arg2;

@end
