
@interface WFiTunesStoreObject : WFiTunesObject <MTLJSONSerializing> {
    NSString * _artistID;
    NSString * _artistName;
    NSString * _currencyCode;
    NSString * _descriptionText;
    NSNumber * _price;
    NSDate * _releaseDate;
}

@property (nonatomic, readonly) NSString *artistID;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)descriptionTextJSONTransformer;

- (void).cxx_destruct;
- (id)artistID;
- (id)artistName;
- (id)currencyCode;
- (id)descriptionText;
- (id)formattedPrice;
- (id)price;
- (id)releaseDate;

@end
