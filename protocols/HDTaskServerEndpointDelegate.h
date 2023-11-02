
@protocol HDTaskServerEndpointDelegate <NSObject>

@required

- (void)taskServerDidFailToInitializeForUUID:(NSUUID *)arg1;
- (void)taskServerDidFinishInitialization:(id <HDTaskServer>)arg1;
- (void)taskServerDidInvalidate:(id <HDTaskServer>)arg1;

@end
