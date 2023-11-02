
@interface BCSBloomFilterExtractor : NSObject <BCSBloomFilterExtractorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)extractShardsURLsFromBloomFilterURL:(id)arg1 completion:(id /* block */)arg2;
- (void)extractShardsURLsFromFilterShardURL:(id)arg1 domainShardURL:(id)arg2 completion:(id /* block */)arg3;

@end
