
@protocol HKRPWatchInstallAppsProviding <NSObject>

@required

- (void)installApp:(void *)arg1 onPairedDevice:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: ASDSystemAppMetadata *, NRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*

@end
