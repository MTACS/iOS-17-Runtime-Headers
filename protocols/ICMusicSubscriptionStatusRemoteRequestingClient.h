
@protocol ICMusicSubscriptionStatusRemoteRequestingClient <NSObject>

@required

- (void)deliverSubscriptionStatusResponse:(ICMusicSubscriptionStatusResponse *)arg1 forRemoteRequestWithUniqueIdentifier:(NSUUID *)arg2 error:(NSError *)arg3;

@end
