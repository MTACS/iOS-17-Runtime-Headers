
@interface UVServiceHubServiceFactory : NSObject

- (id)newAgentPipeService:(id /* block */)arg1 error:(id*)arg2;
- (id)newPreviewService:(id /* block */)arg1 error:(id*)arg2;
- (id)newShellPipeService:(id /* block */)arg1 error:(id*)arg2;

@end
