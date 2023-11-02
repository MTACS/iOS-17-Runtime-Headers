
@interface KGNodeFilter : KGElementFilter {
    bool  _whereNoInAndOutEdges;
    bool  _whereNoInEdges;
    bool  _whereNoOutEdges;
}

@property (nonatomic) bool whereNoInAndOutEdges;
@property (nonatomic) bool whereNoInEdges;
@property (nonatomic) bool whereNoOutEdges;

- (bool)matchesNode:(id)arg1;
- (void)setWhereNoInAndOutEdges:(bool)arg1;
- (void)setWhereNoInEdges:(bool)arg1;
- (void)setWhereNoOutEdges:(bool)arg1;
- (bool)whereNoInAndOutEdges;
- (bool)whereNoInEdges;
- (bool)whereNoOutEdges;

@end
