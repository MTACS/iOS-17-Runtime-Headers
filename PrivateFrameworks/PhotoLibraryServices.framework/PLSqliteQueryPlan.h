
@interface PLSqliteQueryPlan : NSObject {
    NSMutableArray * _nodes;
    NSRegularExpression * _stringRepresentationRegex;
}

@property (readonly, copy) NSString *graphDescription;
@property (readonly, copy) NSString *listDescription;

- (void).cxx_destruct;
- (void)_renderLevelWithParentIdentifier:(int)arg1 prefix:(id)arg2 intoLines:(id)arg3;
- (id)_stringRepresentationRegex;
- (void)addNodeWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4;
- (void)addNodeWithStringRepresentation:(id)arg1;
- (id)graphDescription;
- (id)init;
- (id)listDescription;

@end
