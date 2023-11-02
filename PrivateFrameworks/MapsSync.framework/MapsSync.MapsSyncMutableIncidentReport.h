
@interface MapsSync.MapsSyncMutableIncidentReport : MapsSync.MapsSyncMutableBaseItem {
    void _proxy;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) short type;

- (void).cxx_destruct;
- (id)countryCode;
- (id)initWithProxyObject:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setType:(short)arg1;
- (short)type;

@end
