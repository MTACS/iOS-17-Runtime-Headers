
@interface CKVSQLCommandOrder : NSObject <NSCopying> {
    NSArray * _columnNames;
    long long  _orderMode;
}

@property (nonatomic, readonly) NSArray *columnNames;
@property (nonatomic, readonly) long long orderMode;

- (void).cxx_destruct;
- (id)columnNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOrderMode:(long long)arg1 columnNames:(id)arg2;
- (long long)orderMode;

@end
