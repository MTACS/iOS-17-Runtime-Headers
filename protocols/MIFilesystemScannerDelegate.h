
@protocol MIFilesystemScannerDelegate

@required

- (void)errorOccurred:(NSError *)arg1;
- (bool)scanAppExtensionsInFrameworkBundle:(MIExecutableBundle *)arg1 withError:(id*)arg2;
- (bool)scanExecutableBundle:(MIExecutableBundle *)arg1 inContainer:(MIBundleContainer *)arg2 forPersona:(NSString *)arg3 withError:(id*)arg4;

@end
