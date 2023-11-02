
@interface EFSQLGeneratorCompoundPredicateNode : NSObject <EFSQLGeneratorPredicateNode> {
    NSArray * _childPredicates;
    unsigned long long  _predicateType;
}

@property (nonatomic, readonly) NSArray *childPredicates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long predicateType;
@property (nonatomic, readonly) <EFSQLValueExpressable> *sqlExpressable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childPredicates;
- (id)initWithPredicateType:(unsigned long long)arg1 childPredicates:(id)arg2;
- (unsigned long long)predicateType;
- (id)sqlExpressable;

@end
