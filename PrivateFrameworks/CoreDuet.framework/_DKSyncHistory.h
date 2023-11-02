
@interface _DKSyncHistory : NSObject {
    unsigned long long  _lastDaySyncCount;
    NSDate * _lastSyncDate;
}

@property (nonatomic, readonly) unsigned long long lastDaySyncCount;
@property (nonatomic, readonly) NSDate *lastSyncDate;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithLastSyncDate:(id)arg1 lastDaySyncCount:(unsigned long long)arg2;
- (unsigned long long)lastDaySyncCount;
- (id)lastSyncDate;

@end
