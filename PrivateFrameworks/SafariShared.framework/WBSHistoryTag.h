
@interface WBSHistoryTag : NSObject {
    long long  _databaseID;
    NSString * _identifier;
    long long  _level;
    double  _modificationTimestamp;
    NSString * _title;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) double modificationTimestamp;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (long long)databaseID;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (long long)level;
- (double)modificationTimestamp;
- (id)title;

@end
