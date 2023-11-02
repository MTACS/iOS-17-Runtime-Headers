
@protocol HAP2AccessoryServerTransportCommon <NSObject>

@required

- (void)closeWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, HAP2AccessorySessionInfo *, NSError *, void*
- (<HAP2AccessoryServerTransportRequestEndpoint> *)endpointForCharacteristic:(HAPCharacteristic *)arg1;
- (<HAP2AccessoryServerTransportRequestEndpoint> *)endpointForCharacteristics:(NSArray *)arg1;
- (double)maxRequestTimeout;
- (bool)mergeWithNewTransport:(id <HAP2AccessoryServerTransportCommon>)arg1;
- (NSString *)mimeTypeForCharacteristicRequests;
- (NSString *)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (void)openWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, HAP2AccessorySessionInfo *, NSError *, void*
- (unsigned long long)protocolFeaturesForVersion:(HMFVersion *)arg1;
- (void)sendRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HAP2AccessoryServerTransportRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (unsigned long long)state;
- (<HAP2AccessoryServerTransportCommon> *)underlyingTransport;
- (void)updateMaxRequestTimeout:(double)arg1;
- (<HAP2AccessoryServerTransportRequestEndpoint> *)wellKnownEndpoint:(unsigned long long)arg1;

@end
