
@protocol NPTMetadataCollection <NSObject>

@required

+ (NSString *)collectorName;

- (NSMutableDictionary *)cachedMetadata;
- (id /* block */)metadataDidChangeHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NPTMetadataEvent *, NSError *, void*, id, SEL
- (void)setCachedMetadata:(NSMutableDictionary *)arg1;
- (void)setMetadataDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NPTMetadataEvent *, NSError *, void*
- (void)startCollectingWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSArray *, void*
- (void)stopCollecting;

@end
