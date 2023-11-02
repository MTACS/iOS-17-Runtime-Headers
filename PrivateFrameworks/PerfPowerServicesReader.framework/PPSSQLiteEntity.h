
@interface PPSSQLiteEntity : NSObject <NSCopying> {
    NSString * _tableName;
}

@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disambiguatedSQLForProperty:(id)arg1 shouldEscape:(bool)arg2;
- (unsigned long long)hash;
- (id)initWithTableName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)joinClauseForProperty:(id)arg1;
- (id)tableName;

@end
