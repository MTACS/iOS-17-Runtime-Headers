
@interface _EDThreadScopeInfo : NSObject {
    long long  _databaseID;
    NSDate * _lastViewedDate;
    bool  _needsUpdate;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, retain) NSDate *lastViewedDate;
@property (nonatomic) bool needsUpdate;

- (void).cxx_destruct;
- (long long)databaseID;
- (id)description;
- (id)initWithDatabaseID:(long long)arg1 needsUpdate:(bool)arg2 lastViewedDate:(id)arg3;
- (id)lastViewedDate;
- (bool)needsUpdate;
- (void)setLastViewedDate:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;

@end
