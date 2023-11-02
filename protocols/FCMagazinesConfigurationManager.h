
@protocol FCMagazinesConfigurationManager <NSObject>

@required

- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(void *)arg1 formatVersion:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSObject<OS_dispatch_queue> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSData *)magazinesConfigurationData;

@end
