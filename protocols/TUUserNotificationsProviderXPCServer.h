
@protocol TUUserNotificationsProviderXPCServer <NSObject>

@required

- (oneway void)momentCapturedForStreamToken:(void *)arg1 requesterID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
