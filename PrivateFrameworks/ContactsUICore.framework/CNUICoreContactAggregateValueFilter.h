
@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter> {
    NSArray * _valueFilters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *valueFilters;

- (void).cxx_destruct;
- (id)contactByFilteringOutPropertyValueOfContact:(id)arg1;
- (id)description;
- (void)filterPropertyValuesFromContact:(id)arg1;
- (id)init;
- (id)initWithValueFilters:(id)arg1;
- (id)valueFilters;

@end
