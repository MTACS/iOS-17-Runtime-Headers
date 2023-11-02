
@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex * _index;
    bool  _isHandlingExpressions;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingEntity;
- (id)initForIndex:(id)arg1 withScope:(id)arg2;
- (bool)isIndexExpressionScoped;
- (bool)isIndexScoped;

@end
