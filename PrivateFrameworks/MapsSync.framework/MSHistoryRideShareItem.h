
@interface MSHistoryRideShareItem : MSHistoryItem {
    void _endWaypoint;
    void _startWaypoint;
}

@property (nonatomic, copy) NSData *endWaypoint;
@property (nonatomic, copy) NSData *startWaypoint;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)endWaypoint;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 endWaypoint:(id)arg2 startWaypoint:(id)arg3;
- (void)setEndWaypoint:(id)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;

@end
