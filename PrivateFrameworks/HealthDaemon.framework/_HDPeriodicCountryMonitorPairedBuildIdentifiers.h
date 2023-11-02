
@interface _HDPeriodicCountryMonitorPairedBuildIdentifiers : NSObject {
    NSString * _buildIdentifier;
    NSString * _pairingIdentifier;
}

@property (nonatomic, readonly, copy) NSString *buildIdentifier;
@property (nonatomic, readonly, copy) NSString *pairingIdentifier;

- (void).cxx_destruct;
- (id)buildIdentifier;
- (id)initWithPairingIdentifier:(id)arg1 buildIdentifier:(id)arg2;
- (id)pairingIdentifier;

@end
