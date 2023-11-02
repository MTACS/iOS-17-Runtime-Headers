
@protocol UVAgentPreviewServiceProtocol <NSObject>

@required

- (oneway void)sendEndpoint:(NSXPCListenerEndpoint *)arg1 context:(UVPropertyList *)arg2 contentIdentifier:(NSString *)arg3;

@end
