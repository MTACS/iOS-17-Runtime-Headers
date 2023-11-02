
@interface BMRetrievalFilter : NSObject {
    long long  _inclusionOperator;
    NSSet * _items;
    long long  _operand;
    NSSet * _types;
}

@property (nonatomic) long long inclusionOperator;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic) long long operand;
@property (nonatomic, retain) NSSet *types;

+ (id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 items:(id)arg3;
+ (id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 types:(id)arg3;

- (void).cxx_destruct;
- (long long)inclusionOperator;
- (id)items;
- (long long)operand;
- (id)rulePredicate;
- (void)setInclusionOperator:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setOperand:(long long)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
