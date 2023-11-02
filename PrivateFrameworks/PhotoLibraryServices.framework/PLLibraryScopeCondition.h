
@interface PLLibraryScopeCondition : NSObject <NSCopying> {
    unsigned char  _criteria;
}

@property (nonatomic) unsigned char criteria;
@property (nonatomic, readonly) unsigned char type;

+ (void)_abortIfCalledOnBaseClass;
+ (id)conditionWithSingleQueries:(id)arg1 criteria:(unsigned char)arg2;
+ (bool)supportsQueryKey:(int)arg1;

- (id)conditionQuery;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)criteria;
- (id)description;
- (id)initWithCriteria:(unsigned char)arg1;
- (id)query;
- (void)setCriteria:(unsigned char)arg1;
- (unsigned char)type;

@end
