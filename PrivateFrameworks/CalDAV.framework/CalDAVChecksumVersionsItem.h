
@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet * _versionStringsSupported;
}

- (void).cxx_destruct;
- (void)addVersionSupported:(id)arg1;
- (id)copyParseRules;
- (id)init;
- (bool)supportsVersion:(id)arg1;

@end
