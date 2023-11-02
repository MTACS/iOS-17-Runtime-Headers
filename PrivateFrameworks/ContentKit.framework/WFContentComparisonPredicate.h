
@interface WFContentComparisonPredicate : WFContentPredicate <WFContentPropertyContainer> {
    unsigned long long  _comparisonType;
    WFContentProperty * _property;
    <NSCopying> * _value;
    id /* block */  _valueBlock;
}

@property (nonatomic, readonly) unsigned long long comparisonType;
@property (nonatomic, readonly) NSSet *containedProperties;
@property (nonatomic, readonly) WFContentProperty *property;
@property (nonatomic, readonly, copy) <NSCopying> *value;
@property (nonatomic, readonly, copy) id /* block */ valueBlock;

+ (void)initialize;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(unsigned long long)arg3;
+ (id)predicateWithValueBlock:(id /* block */)arg1 forProperty:(id)arg2;
+ (void)registerValueMapping:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)comparableValueForValue:(id)arg1;
- (unsigned long long)comparisonType;
- (id)containedProperties;
- (id)description;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (bool)evaluateWithValues:(id)arg1;
- (id)initWithValue:(id)arg1 valueBlock:(id /* block */)arg2 property:(id)arg3 comparisonType:(unsigned long long)arg4;
- (id)property;
- (id)value;
- (id /* block */)valueBlock;

@end
