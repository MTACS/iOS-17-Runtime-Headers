
@protocol _SGDSuggestManagerBaseProtocol <_SGDSuggestManagerMetricsProtocol>

@required

- (void)isEnabledWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)keepDirty:(bool)arg1;
- (void)noopWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*

@end