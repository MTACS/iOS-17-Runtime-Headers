
@protocol DNDLifetimeDetailsProviderDelegate <NSObject>

@required

- (void)lifetimeDetailsProvider:(DNDLifetimeDetailsProvider *)arg1 didUpdateAvailableLifetimeDetails:(NSArray *)arg2;

@end
