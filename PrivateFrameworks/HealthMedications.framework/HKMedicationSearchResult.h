
@interface HKMedicationSearchResult : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _lock_clinicalProducts;
    bool  _lock_hasWalkedGraph;
    NSArray * _lock_ingredientProducts;
    NSArray * _lock_routedDoseFormProducts;
    HKConcept * _lock_tradeNameProduct;
    long long  _lock_traversedNodeCount;
    NSNumber * _seedHgId;
    HKConcept * _specificProduct;
    long long  _traversedDepth;
    HKIntegerSet * _traversedRelationships;
}

@property (nonatomic, readonly, copy) NSArray *clinicalProducts;
@property (nonatomic, readonly) long long debug_traversedNodeCount;
@property (nonatomic, readonly, copy) NSArray *ingredientProducts;
@property (nonatomic, readonly, copy) NSArray *routedDoseFormProducts;
@property (nonatomic, readonly, copy) NSNumber *seedHgId;
@property (nonatomic, readonly, copy) HKConcept *specificProduct;
@property (nonatomic, readonly, copy) HKConcept *tradeNameProduct;
@property (nonatomic, readonly) long long traversedDepth;
@property (nonatomic, readonly, copy) HKIntegerSet *traversedRelationships;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lock_clinicalProducts;
- (long long)_lock_debug_traversedNodeCount;
- (id)_lock_ingredientProducts;
- (id)_lock_routedDoseFormProducts;
- (id)_lock_tradeNameProduct;
- (void)_lock_walkGraph;
- (void)_lock_walkGraphIfNecessary;
- (void)_visit:(id)arg1 ofRoot:(id)arg2 withMaxDepth:(long long)arg3 handler:(id /* block */)arg4;
- (id)clinicalProducts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)debug_traversedNodeCount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)ingredientProducts;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeedHgId:(id)arg1 specificProduct:(id)arg2 traversedRelationships:(id)arg3 traversedDepth:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)routedDoseFormProducts;
- (id)seedHgId;
- (id)specificProduct;
- (id)tradeNameProduct;
- (long long)traversedDepth;
- (id)traversedRelationships;

@end
