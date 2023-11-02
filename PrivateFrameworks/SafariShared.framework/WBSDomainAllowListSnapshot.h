
@interface WBSDomainAllowListSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSSet * _allowedDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDomains:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (bool)isDomainAllowed:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)plistDataWithFormat:(unsigned long long)arg1;

@end
