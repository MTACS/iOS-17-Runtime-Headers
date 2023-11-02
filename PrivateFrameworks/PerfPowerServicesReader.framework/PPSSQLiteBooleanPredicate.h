
@interface PPSSQLiteBooleanPredicate : PPSSQLitePredicate <NSCopying> {
    bool  _booleanValue;
}

@property (nonatomic, readonly) bool booleanValue;

+ (id)falsePredicate;
+ (id)truePredicate;

- (bool)booleanValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)sqlForEntity:(id)arg1;

@end
