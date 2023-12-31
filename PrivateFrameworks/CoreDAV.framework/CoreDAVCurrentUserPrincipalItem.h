
@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem {
    CoreDAVHrefItem * _href;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (nonatomic, retain) CoreDAVHrefItem *href;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)href;
- (id)init;
- (void)setHref:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end
