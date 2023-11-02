
@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse> {
    NSArray * _childResponses;
}

@property (nonatomic, readonly, copy) NSNumber *accountIdentifier;
@property (nonatomic, readonly, copy) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enqueuerAccountIdentifier;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (nonatomic, readonly, copy) id rawResponse;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)enqueuerAccountIdentifier;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)expirationDate;
- (id)initWithResponses:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (id)performanceMetrics;
- (id)rawResponse;
- (id)storefrontIdentifier;

@end
