
@interface MSHistoryItem : MapsSync.MapsSyncObject {
    void _position;
    void _positionIndex;
}

@property (nonatomic) double position;
@property (nonatomic) long long positionIndex;

+ (void)beforeFetchWithStore:(id)arg1;
+ (Class)managedClass;
+ (id)optionsWith:(id)arg1;
+ (void)pruneHistoryItemsWithStore:(id)arg1;

- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 position:(double)arg2 positionIndex:(long long)arg3;
- (double)position;
- (long long)positionIndex;
- (void)setPosition:(double)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;

@end
