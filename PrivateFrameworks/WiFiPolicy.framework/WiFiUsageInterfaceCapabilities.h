
@interface WiFiUsageInterfaceCapabilities : NSObject {
    struct _Apple80211 { } * _a11Ref;
    NSString * _interfaceName;
    unsigned long long  _maxNumberOfSpatialStreams;
    unsigned long long  _maxPHYRate;
}

@property (nonatomic) struct _Apple80211 { }*a11Ref;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic) unsigned long long maxNumberOfSpatialStreams;
@property (nonatomic) unsigned long long maxPHYRate;

- (void).cxx_destruct;
- (struct _Apple80211 { }*)a11Ref;
- (unsigned long long)currentLinkPHYRate;
- (void)dealloc;
- (id)description;
- (id)initWithInterfaceName:(id)arg1;
- (id)interfaceName;
- (unsigned long long)maxInterfaceNumberOfSpatialStreams;
- (unsigned long long)maxInterfacePHYRate;
- (unsigned long long)maxLinkPHYRate;
- (unsigned long long)maxNumberOfSpatialStreams;
- (unsigned long long)maxPHYRate;
- (void)setA11Ref:(struct _Apple80211 { }*)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setMaxNumberOfSpatialStreams:(unsigned long long)arg1;
- (void)setMaxPHYRate:(unsigned long long)arg1;

@end
