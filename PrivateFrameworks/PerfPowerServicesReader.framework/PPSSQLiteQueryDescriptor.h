
@interface PPSSQLiteQueryDescriptor : NSObject <NSCopying> {
    PPSSQLiteEntity * _entity;
    NSArray * _groupByProperties;
    unsigned long long  _limitCount;
    unsigned long long  _offsetCount;
    NSArray * _orderByDirections;
    NSArray * _orderByProperties;
    PPSSQLitePredicate * _predicate;
    bool  _returnsDistinctEntities;
}

@property (nonatomic, retain) PPSSQLiteEntity *entity;
@property (nonatomic, copy) NSArray *groupByProperties;
@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) unsigned long long offsetCount;
@property (nonatomic, copy) NSArray *orderByDirections;
@property (nonatomic, copy) NSArray *orderByProperties;
@property (nonatomic, copy) PPSSQLitePredicate *predicate;
@property (nonatomic) bool returnsDistinctEntities;

- (void).cxx_destruct;
- (id)_sqlForSelectWithProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)groupByProperties;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2 limitCount:(unsigned long long)arg3 offsetCount:(unsigned long long)arg4;
- (unsigned long long)limitCount;
- (unsigned long long)offsetCount;
- (id)orderByDirections;
- (id)orderByProperties;
- (id)predicate;
- (bool)returnsDistinctEntities;
- (void)setEntity:(id)arg1;
- (void)setGroupByProperties:(id)arg1;
- (void)setLimitCount:(unsigned long long)arg1;
- (void)setOffsetCount:(unsigned long long)arg1;
- (void)setOrderByDirections:(id)arg1;
- (void)setOrderByProperties:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setReturnsDistinctEntities:(bool)arg1;

@end
