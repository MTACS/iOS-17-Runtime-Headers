
@interface UARPDynamicAssetPersonalization : NSObject {
    UARPUploaderEndpoint * _endpoint;
    UARPSuperBinaryAsset * _im4mAsset;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _options;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

@property (readonly) long long assetNumber;
@property (readonly) UARPUploaderEndpoint *endpoint;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (long long)assetNumber;
- (id)buildKey:(id)arg1 forPayload:(id)arg2;
- (id)buildTicketPrefixForPayload:(id)arg1;
- (id)endpoint;
- (id)init;
- (id)initWithEndpoint:(id)arg1 url:(id)arg2;
- (bool)prepareDynamicAsset:(id)arg1 error:(id*)arg2;
- (bool)processDynamicAsset:(id*)arg1;
- (bool)tssRequest:(id)arg1 error:(id*)arg2;
- (id)url;

@end
