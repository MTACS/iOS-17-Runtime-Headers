
@protocol AUPBRegistrarListening <NSObject>

@required

- (void)newServerAdded:(NSXPCListenerEndpoint *)arg1;

@end
