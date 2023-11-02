
@interface CKVSQLCommandJoin : NSObject {
    CKVSQLCommandJoinCriterion * _joinCriterion;
    NSString * _table;
}

@property (nonatomic, readonly) CKVSQLCommandJoinCriterion *joinCriterion;
@property (nonatomic, readonly) NSString *table;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTable:(id)arg1 joinCriterion:(id)arg2;
- (id)joinCriterion;
- (id)table;

@end
