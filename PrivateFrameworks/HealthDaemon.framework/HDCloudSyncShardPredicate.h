
@interface HDCloudSyncShardPredicate : NSObject <NSCopying> {
    NSDate * _endDate;
    NSDate * _startDate;
    int  _type;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)codablePredicate;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)initForShardType:(int)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithCodableShardPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)startDate;
- (int)type;

@end
