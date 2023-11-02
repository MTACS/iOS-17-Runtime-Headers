
@protocol FCWebURLResolutionEndpointConnection

@required

- (void)fetchWebURLBloomFilterInfoWithQualityOfService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTPBBloomFilterInfo *, NSError *, void*
- (void)resolveWebURL:(void *)arg1 withQualityOfService:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
