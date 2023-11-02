
@protocol CPSAppInstalling <NSObject>

@required

- (void)installDownloadedAppWithBundleID:(void *)arg1 localFilePath:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)stopStallingCurrentInstallation;

@end
