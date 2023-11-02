
@protocol MPCMediaRemoteMiddlewareControllerProviding <NSObject>

@required

- (MPCMediaRemoteController *)controller;
- (MPCFuture *)controllerFuture;

@end
