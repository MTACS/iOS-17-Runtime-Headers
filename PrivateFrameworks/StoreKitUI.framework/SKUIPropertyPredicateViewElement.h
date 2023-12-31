
@interface SKUIPropertyPredicateViewElement : SKUIPredicateViewElement {
    long long  _comparisonType;
    NSString * _property;
    NSString * _value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly, copy) NSString *property;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)comparisonType;
- (id)entityValuePredicate;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)property;
- (id)value;

@end
