
@interface PKWebServiceMMORFeature : PKWebServiceRegionFeature {
    NSSet * _supportedNetworks;
}

@property (nonatomic, readonly, copy) NSSet *supportedNetworks;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (id)supportedNetworks;

@end
