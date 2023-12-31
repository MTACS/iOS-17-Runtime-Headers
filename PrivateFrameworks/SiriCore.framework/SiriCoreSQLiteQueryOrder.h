
@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying> {
    NSArray * _columnNames;
    long long  _mode;
}

@property (nonatomic, readonly, copy) NSArray *columnNames;
@property (nonatomic, readonly) long long mode;

- (void).cxx_destruct;
- (id)columnNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithColumnNames:(id)arg1 mode:(long long)arg2;
- (long long)mode;

@end
