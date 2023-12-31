
@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
    NSMutableSet * _principalSearchProperties;
}

@property (nonatomic, retain) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addPrincipalSearchProperty:(id)arg1;
- (id)description;
- (id)init;
- (id)principalSearchProperties;
- (void)setPrincipalSearchProperties:(id)arg1;

@end
