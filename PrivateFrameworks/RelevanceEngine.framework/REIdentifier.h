
@interface REIdentifier : NSString <NSCopying> {
    NSString * _dataSource;
    unsigned long long  _hash;
    NSString * _identifier;
    unsigned long long  _length;
    NSString * _section;
}

@property (nonatomic, readonly) NSString *dataSource;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *section;

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDataSource:(id)arg1 section:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (id)section;

@end
