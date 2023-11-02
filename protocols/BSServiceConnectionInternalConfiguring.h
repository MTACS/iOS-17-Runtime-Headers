
@protocol BSServiceConnectionInternalConfiguring <BSServiceConnectionConfiguring>

@required

- (BSServiceInterface *)interface;
- (void)setErrorHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSInvalidatable> *, NSError *, void*
- (void)setMessageHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSInvalidatable> *, <BSXPCServiceConnectionMessage> *, void*
- (void)setTargetDispatchingQueue:(id <BSServiceDispatchingQueue>)arg1;

@end
