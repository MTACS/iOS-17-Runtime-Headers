
@interface PPSSQLitePropertyPredicate : PPSSQLitePredicate <NSCopying> {
    NSString * _property;
}

@property (nonatomic, readonly, copy) NSString *property;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)property;

@end
