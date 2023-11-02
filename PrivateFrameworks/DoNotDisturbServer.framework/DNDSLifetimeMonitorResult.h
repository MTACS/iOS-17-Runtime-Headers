
@interface DNDSLifetimeMonitorResult : NSObject {
    NSArray * _activeUUIDs;
    NSArray * _expiredUUIDs;
}

@property (nonatomic, readonly, copy) NSArray *activeUUIDs;
@property (nonatomic, readonly, copy) NSArray *expiredUUIDs;

- (void).cxx_destruct;
- (id)activeUUIDs;
- (id)expiredUUIDs;
- (id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2;

@end
