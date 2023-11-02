
@interface HAP2AccessorySessionInfo : NSObject {
    unsigned long long  _numBonjourNames;
    unsigned long long  _numIPAddresses;
    unsigned long long  _numIPAddressesTried;
}

@property (nonatomic, readonly) unsigned long long numBonjourNames;
@property (nonatomic, readonly) unsigned long long numIPAddresses;
@property (nonatomic, readonly) unsigned long long numIPAddressesTried;

- (id)init;
- (id)initWithNumIPs:(unsigned long long)arg1 numIPsTried:(unsigned long long)arg2 numBonjourNames:(unsigned long long)arg3;
- (unsigned long long)numBonjourNames;
- (unsigned long long)numIPAddresses;
- (unsigned long long)numIPAddressesTried;
- (void)resetWithNumIPs:(unsigned long long)arg1 numIPsTried:(unsigned long long)arg2 numBonjourNames:(unsigned long long)arg3;

@end
