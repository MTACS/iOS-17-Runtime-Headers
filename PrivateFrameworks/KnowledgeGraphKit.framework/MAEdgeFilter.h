
@interface MAEdgeFilter : MAElementFilter

@property (nonatomic, readonly) MARelation *anyDirectionRelation;
@property (nonatomic, readonly) MARelation *inRelation;
@property (nonatomic, readonly) KGEdgeFilter *kgEdgeFilter;
@property (nonatomic, readonly) MARelation *outRelation;

+ (id)edgeFilterWithVisualString:(id)arg1;
+ (bool)scanInstance:(out id*)arg1 withScanner:(id)arg2;

- (id)anyDirectionRelation;
- (void)appendVisualStringToString:(id)arg1;
- (id)inRelation;
- (id)kgEdgeFilter;
- (bool)matchesEdge:(id)arg1;
- (id)outRelation;
- (id)relationWithType:(unsigned long long)arg1;

@end
