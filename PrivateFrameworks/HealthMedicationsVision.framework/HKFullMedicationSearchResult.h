
@interface HKFullMedicationSearchResult : NSObject {
    NSString * _doseForm;
    NSArray * _ingredients;
    NSString * _packagingNDC;
    NSString * _packagingName;
    NSString * _productBrandName;
    NSString * _productGenericName;
    NSString * _productId;
    NSString * _route;
}

@property (nonatomic, readonly, copy) NSString *doseForm;
@property (nonatomic, readonly, copy) NSArray *ingredients;
@property (nonatomic, readonly, copy) NSString *packagingNDC;
@property (nonatomic, readonly, copy) NSString *packagingName;
@property (nonatomic, readonly, copy) NSString *productBrandName;
@property (nonatomic, readonly, copy) NSString *productGenericName;
@property (nonatomic, readonly, copy) NSString *productId;
@property (nonatomic, readonly, copy) NSString *route;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)doseForm;
- (id)ingredients;
- (id)initWithProductId:(id)arg1 packagingName:(id)arg2 packagingNDC:(id)arg3 productBrandName:(id)arg4 productGenericName:(id)arg5 route:(id)arg6 doseForm:(id)arg7;
- (id)packagingNDC;
- (id)packagingName;
- (id)productBrandName;
- (id)productGenericName;
- (id)productId;
- (id)route;

@end
