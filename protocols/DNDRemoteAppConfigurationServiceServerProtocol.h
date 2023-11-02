
@protocol DNDRemoteAppConfigurationServiceServerProtocol <NSObject>

@required

- (void)getCurrentAppConfigurationForActionIdentifier:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNAction *, NSError *, void*
- (void)invalidateAppContextForActionIdentifier:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
