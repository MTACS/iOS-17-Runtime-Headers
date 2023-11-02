
@interface MANodeFilter : MAElementFilter {
    bool  _whereNoInAndOutEdges;
    bool  _whereNoInEdges;
    bool  _whereNoOutEdges;
}

@property (nonatomic, readonly) KGNodeFilter *kgNodeFilter;
@property (nonatomic, readonly) MARelation *relation;
@property (nonatomic) bool whereNoInAndOutEdges;
@property (nonatomic) bool whereNoInEdges;
@property (nonatomic) bool whereNoOutEdges;

+ (id)nodeFilterWithVisualString:(id)arg1;
+ (bool)scanInstance:(out id*)arg1 withScanner:(id)arg2;

- (void)appendVisualStringToString:(id)arg1;
- (id)kgNodeFilter;
- (bool)matchesNode:(id)arg1;
- (id)relation;
- (void)setWhereNoInAndOutEdges:(bool)arg1;
- (void)setWhereNoInEdges:(bool)arg1;
- (void)setWhereNoOutEdges:(bool)arg1;
- (bool)whereNoInAndOutEdges;
- (bool)whereNoInEdges;
- (bool)whereNoOutEdges;

@end
