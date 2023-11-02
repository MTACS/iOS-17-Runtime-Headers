
@interface AMSLookupItemOffer : NSObject {
    NSDictionary * _lookupDictionary;
}

@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) NSString *offerType;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSString *subscriptionType;

- (void).cxx_destruct;
- (id)actionTextForType:(id)arg1;
- (id)buyParameters;
- (id)formattedPrice;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (id)offerType;
- (id)price;
- (id)subscriptionType;

@end
