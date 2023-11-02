
@interface MSServerEvaluationStatus : MapsSync.MapsSyncObject {
    void _arpStatus;
    void _positionIndex;
    void _rapStatus;
}

@property (nonatomic) bool arpStatus;
@property (nonatomic) long long positionIndex;
@property (nonatomic) bool rapStatus;

+ (Class)managedClass;

- (bool)arpStatus;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 arpStatus:(bool)arg2 positionIndex:(long long)arg3 rapStatus:(bool)arg4;
- (long long)positionIndex;
- (bool)rapStatus;
- (void)setArpStatus:(bool)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setRapStatus:(bool)arg1;

@end
