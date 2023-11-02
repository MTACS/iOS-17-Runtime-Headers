
@protocol UVAgentPreviewSceneServiceProtocol <UVAgentPreviewServiceProtocol>

@required

- (oneway void)generateStaticOutput:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UVPropertyList *, NSError *, void*
- (oneway void)performUpdate:(void *)arg1 sceneContext:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: UVPropertyList *, UVPropertyList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UVPropertyList *, NSError *, void*

@end
