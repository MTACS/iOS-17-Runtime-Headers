
@interface PUGroupValueFilter : PUValueFilter {
    NSArray * _filters;
}

@property (nonatomic, copy) NSArray *filters;

- (void).cxx_destruct;
- (id)filters;
- (double)outputValue;
- (void)setFilters:(id)arg1;
- (void)setInputValue:(double)arg1;

@end
