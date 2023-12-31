
@interface CoreDAVInvertItem : CoreDAVItem {
    CoreDAVPrincipalItem * _principal;
}

@property (nonatomic, retain) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)principal;
- (void)setPrincipal:(id)arg1;
- (void)write:(id)arg1;

@end
