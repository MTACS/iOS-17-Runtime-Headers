
@interface MSIncidentReport : MapsSync.MapsSyncObject {
    void _countryCode;
    void _positionIndex;
    void _type;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) long long positionIndex;
@property (nonatomic) short type;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)countryCode;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 countryCode:(id)arg2 positionIndex:(long long)arg3 type:(short)arg4;
- (long long)positionIndex;
- (void)setCountryCode:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setType:(short)arg1;
- (short)type;

@end
