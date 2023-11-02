
@interface BMSQLColumnAccessSet : NSObject {
    NSSet * _columns;
    NSString * _table;
}

@property (nonatomic, readonly) NSSet *columns;
@property (nonatomic, readonly, copy) NSString *table;

+ (id)new;

- (void).cxx_destruct;
- (bool)checkTable:(id)arg1 column:(id)arg2;
- (id)columns;
- (id)description;
- (id)init;
- (id)initWithTable:(id)arg1 columns:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)table;

@end
