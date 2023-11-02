
@interface HKGenericMedicationSearchResult : NSObject {
    NSString * _brandName;
    NSString * _genericMedicationId;
    NSString * _genericMedicationName;
    NSArray * _ingredients;
}

@property (nonatomic, readonly, copy) NSString *brandName;
@property (nonatomic, readonly, copy) NSString *genericMedicationId;
@property (nonatomic, readonly, copy) NSString *genericMedicationName;
@property (nonatomic, readonly, copy) NSArray *ingredients;

- (void).cxx_destruct;
- (id)brandName;
- (id)copyByReplacingWithIngredients:(id)arg1;
- (id)dictionaryRepresentation;
- (id)genericMedicationId;
- (id)genericMedicationName;
- (unsigned long long)hash;
- (id)ingredients;
- (id)initWithGenericMedicationId:(id)arg1 genericMedicationName:(id)arg2 brandName:(id)arg3 ingredients:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
