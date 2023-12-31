
@interface SKUIInAppPurchase : NSObject <SKUICacheCoding> {
    NSString * _formattedPrice;
    NSString * _name;
}

@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cacheRepresentation;
- (id)formattedPrice;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithInAppPurchaseDictionary:(id)arg1;
- (id)name;

@end
