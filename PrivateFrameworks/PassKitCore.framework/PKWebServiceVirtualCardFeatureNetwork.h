
@interface PKWebServiceVirtualCardFeatureNetwork : NSObject {
    bool  _implicitlySupported;
    long long  _network;
    NSNumber * _refreshType;
    PKOSVersionRequirementRange * _versions;
}

@property (nonatomic) bool implicitlySupported;
@property (nonatomic) long long network;
@property (nonatomic, retain) NSNumber *refreshType;
@property (nonatomic, retain) PKOSVersionRequirementRange *versions;

+ (id)virtualCardFeatureNetworksFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)implicitlySupported;
- (id)initWithDictionary:(id)arg1 network:(long long)arg2;
- (bool)isSupportedOnDevice:(id)arg1;
- (long long)network;
- (id)refreshType;
- (void)setImplicitlySupported:(bool)arg1;
- (void)setNetwork:(long long)arg1;
- (void)setRefreshType:(id)arg1;
- (void)setVersions:(id)arg1;
- (id)versions;

@end
