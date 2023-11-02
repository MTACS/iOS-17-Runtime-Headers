
@interface WBSAutoplayQuirkWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _domainsToQuirkTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (unsigned long long)quirkTypeForDomain:(id)arg1;

@end
