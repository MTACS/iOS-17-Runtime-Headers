
@interface WFSystemContentWhitelistItem : NSObject {
    char * _utf8DomainGlob;
}

- (void)dealloc;
- (id)initWithDomainGlob:(id)arg1;
- (bool)matchesURL:(id)arg1;

@end
