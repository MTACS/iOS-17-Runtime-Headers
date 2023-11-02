
@interface ML3DatabaseForeignKeyConstraint : NSObject {
    NSArray * _foreignColumns;
    ML3DatabaseTable * _foreignTable;
    NSArray * _localColumns;
}

@property (nonatomic, readonly) NSArray *foreignColumns;
@property (nonatomic, readonly) ML3DatabaseTable *foreignTable;
@property (nonatomic, readonly) NSArray *localColumns;

- (void).cxx_destruct;
- (id)_foreignKeyClauseSQL;
- (id)foreignColumns;
- (id)foreignTable;
- (id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3;
- (id)localColumns;

@end
