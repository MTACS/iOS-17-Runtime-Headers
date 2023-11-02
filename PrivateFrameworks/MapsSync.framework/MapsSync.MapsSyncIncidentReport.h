
@interface MapsSync.MapsSyncIncidentReport : MapsSync.MapsSyncBaseItem {
    void _countryCode;
    void _type;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) short type;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)countryCode;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (short)type;

@end
