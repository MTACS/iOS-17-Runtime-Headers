
@interface CKVSQLCommandClause : NSObject {
    NSString * _clause;
    NSArray * _parameters;
}

@property (nonatomic, readonly) NSString *clause;
@property (nonatomic, readonly) NSArray *parameters;

- (void).cxx_destruct;
- (id)clause;
- (id)description;
- (id)init;
- (id)initWithClause:(id)arg1 parameters:(id)arg2;
- (id)parameters;

@end
