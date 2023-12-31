
@protocol SPCompanionAppServerProtocol <NSObject>

@required

- (void)extensionWithIdentifier:(NSString *)arg1 gotUnknownInterfaceController:(NSString *)arg2;
- (void)fetchNotificationForNotificationID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSData *, NSError *, void*
- (void)requestTimingData:(NSString *)arg1 timingMetaData:(NSDictionary *)arg2;
- (void)sendCacheRequest:(NSData *)arg1 identifier:(NSString *)arg2;
- (void)sendData:(NSData *)arg1 identifier:(NSString *)arg2 clientIdentifiers:(NSArray *)arg3;
- (void)sendData:(void *)arg1 identifier:(void *)arg2 clientIdentifiers:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
