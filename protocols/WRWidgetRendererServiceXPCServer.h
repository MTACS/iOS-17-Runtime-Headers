
@protocol WRWidgetRendererServiceXPCServer

@required

- (oneway void)handleInteraction:(void *)arg1 action:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: WRWidgetRendererSessionKey *, LNAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reloadWidget:(WRWidgetRendererSessionKey *)arg1 reason:(NSNumber *)arg2;
- (oneway void)reloadWidgetIfFailed:(WRWidgetRendererSessionKey *)arg1 reason:(NSNumber *)arg2;
- (oneway void)setEnvironmentModifiers:(NSData *)arg1 forSession:(WRWidgetRendererSessionKey *)arg2;
- (oneway void)setVisiblySettled:(NSNumber *)arg1 forSession:(WRWidgetRendererSessionKey *)arg2;
- (oneway void)setWidgetTaskPriority:(NSNumber *)arg1 forSession:(WRWidgetRendererSessionKey *)arg2;
- (oneway void)subscribe:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (oneway void)unsubscribe:(WRWidgetRendererSessionKey *)arg1;

@end
