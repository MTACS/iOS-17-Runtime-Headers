
@protocol DCPresentmentXPCProtocol <NSObject>

@required

- (void)buildCredentialResponseForSelection:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DCPresentmentSelection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialResponse *, NSError *, void*
- (void)buildErrorResponseWithStatus:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)buildResponseForSelection:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DCPresentmentSelection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)configureWithPartitions:(void *)arg1 presentmentType:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, unsigned long long, DCPresentmentSessionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)generateTransportKeyForSpecification:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)interpretRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DCPresentmentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
