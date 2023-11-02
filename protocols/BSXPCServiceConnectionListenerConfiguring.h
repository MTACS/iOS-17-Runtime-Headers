
@protocol BSXPCServiceConnectionListenerConfiguring

@required

- (void)setConnectionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSXPCServiceConnection *, void*
- (void)setEndpointDescription:(NSString *)arg1;
- (void)setErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setServiceQuality:(BSServiceQuality *)arg1;

@end
