
@interface HFNetworkConfigurationAllowedHostGroup : NSObject {
    NSMutableSet * _mutableAddresses;
    NSMutableSet * _mutableAllowedHosts;
    NSString * _name;
    unsigned long long  _purpose;
}

@property (nonatomic, readonly, copy) NSSet *addresses;
@property (nonatomic, readonly, copy) NSSet *allowedHosts;
@property (nonatomic, retain) NSMutableSet *mutableAddresses;
@property (nonatomic, retain) NSMutableSet *mutableAllowedHosts;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) unsigned long long purpose;
@property (nonatomic, readonly, copy) NSString *purposeLocalizedDescription;

+ (id)groupsForNetworkConfigurationProfiles:(id)arg1;

- (void).cxx_destruct;
- (void)addAllowedHost:(id)arg1;
- (id)addresses;
- (id)allowedHosts;
- (id)initWithName:(id)arg1;
- (id)mutableAddresses;
- (id)mutableAllowedHosts;
- (id)name;
- (unsigned long long)purpose;
- (id)purposeLocalizedDescription;
- (void)setMutableAddresses:(id)arg1;
- (void)setMutableAllowedHosts:(id)arg1;
- (void)setPurpose:(unsigned long long)arg1;

@end
