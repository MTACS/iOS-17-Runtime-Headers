
@interface QLPXCompoundNumberFilter : QLPXNumberFilter {
    NSArray * _filters;
}

@property (nonatomic, copy) NSArray *filters;

- (void).cxx_destruct;
- (id)filters;
- (void)setFilters:(id)arg1;
- (double)updatedOutput;

@end
