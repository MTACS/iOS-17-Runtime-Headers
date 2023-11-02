
@protocol ApplicationObserver <NSObject>

@required

- (void)applicationsDidInstall:(NSArray *)arg1;
- (void)applicationsDidUninstall:(NSArray *)arg1;

@end
