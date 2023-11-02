
@interface PMRSplitTime : NSObject {
    NSString * _comment;
    unsigned long long  _duration;
    NSString * _key;
    long long  _level;
    unsigned long long  _splitTime;
    NSMutableArray * _splitTimes;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *comment;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) long long level;
@property (nonatomic) unsigned long long splitTime;
@property (nonatomic, copy) NSArray *splitTimes;
@property (nonatomic, copy) NSDictionary *userInfo;

- (id)_subtreeDescription;
- (void)addSplitTimesObject:(id)arg1;
- (id)comment;
- (void)dealloc;
- (id)description;
- (id)dumpTraceLog;
- (unsigned long long)duration;
- (id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3;
- (id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3 duration:(unsigned long long)arg4 userInfo:(id)arg5;
- (id)key;
- (long long)level;
- (void)removeSplitTimesObject:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setLevel:(long long)arg1;
- (void)setSplitTime:(unsigned long long)arg1;
- (void)setSplitTimes:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)splitTime;
- (id)splitTimes;
- (id)userInfo;

@end
