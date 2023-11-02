
@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode> {
    EFSQLValueSource * _comparisonSource;
    <EFSQLExpressable> * _constantValue;
    unsigned long long  _predicateOperator;
    EFSQLValueSource * _valueSource;
}

@property (nonatomic, readonly) EFSQLValueSource *comparisonSource;
@property (nonatomic, readonly) <EFSQLExpressable> *constantValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long predicateOperator;
@property (nonatomic, readonly) <EFSQLValueExpressable> *sqlExpressable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EFSQLValueSource *valueSource;

- (void).cxx_destruct;
- (id)comparisonSource;
- (id)constantValue;
- (id)initWithValueSource:(id)arg1 predicateOperator:(unsigned long long)arg2 comparisonSource:(id)arg3;
- (id)initWithValueSource:(id)arg1 predicateOperator:(unsigned long long)arg2 constantValue:(id)arg3;
- (unsigned long long)predicateOperator;
- (id)sqlExpressable;
- (id)valueSource;

@end
