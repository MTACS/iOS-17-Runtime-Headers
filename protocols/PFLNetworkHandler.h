
@protocol PFLNetworkHandler

@required

- (void)downloadConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)downloadModelForTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PFLTaskConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)uploadResultsForIdentifier:(void *)arg1 deviceResults:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, PFLDeviceResults *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
