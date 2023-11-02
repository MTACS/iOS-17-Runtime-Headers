
@interface HKIngredientSearchResult : NSObject {
    NSString * _ingredientId;
    NSString * _ingredientName;
    NSString * _strengthQuantity;
    NSString * _strengthUnit;
}

@property (nonatomic, readonly, copy) NSString *ingredientId;
@property (nonatomic, readonly, copy) NSString *ingredientName;
@property (nonatomic, readonly, copy) NSString *strengthQuantity;
@property (nonatomic, readonly, copy) NSString *strengthUnit;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)ingredientId;
- (id)ingredientName;
- (id)initWithIngredientId:(id)arg1 ingredientName:(id)arg2 strengthQuantity:(id)arg3 strengthUnit:(id)arg4;
- (id)strengthQuantity;
- (id)strengthUnit;

@end
