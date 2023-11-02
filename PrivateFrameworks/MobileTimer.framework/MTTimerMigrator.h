
@interface MTTimerMigrator : NSObject {
    MTTimer * _timer;
}

@property (nonatomic, retain) MTTimer *timer;

- (void).cxx_destruct;
- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
