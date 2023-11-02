
@protocol INCacheableObject <NSObject>

@required

+ (void)buildFromCachePayload:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

- (NSString *)cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
