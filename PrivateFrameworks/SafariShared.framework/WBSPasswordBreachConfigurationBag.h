
@interface WBSPasswordBreachConfigurationBag : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _bag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)firstConfigurationForSupportedProtocolVersion:(unsigned long long)arg1 rampIdentifier:(unsigned long long)arg2 allowValuesForTesting:(bool)arg3;
- (id)initWithBagDictionary:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;

@end
