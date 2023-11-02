
@interface MSAnalyticsIdentifier : MapsSync.MapsSyncObject {
    void _data;
    void _positionIndex;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic) long long positionIndex;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)data;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 data:(id)arg2 positionIndex:(long long)arg3;
- (long long)positionIndex;
- (void)setData:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;

@end
