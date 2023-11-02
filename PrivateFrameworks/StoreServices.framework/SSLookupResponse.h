
@interface SSLookupResponse : NSObject <SSXPCCoding> {
    NSDate * _expirationDate;
    NSMutableArray * _itemOrder;
    SSMetricsPageEvent * _metricsPageEvent;
    NSDictionary * _response;
}

@property (nonatomic, readonly) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SSMetricsConfiguration *metricsConfiguration;
@property (setter=_setMetricsPageEvent:, nonatomic, retain) SSMetricsPageEvent *metricsPageEvent;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (readonly) Class superclass;

- (void)_enumerateItemsWithBlock:(id /* block */)arg1;
- (void)_setMetricsPageEvent:(id)arg1;
- (id)allItems;
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)expirationDate;
- (id)initWithLocationResponseDictionary:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)itemForKey:(id)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (id)responseDictionary;
- (void)setExpirationDate:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
