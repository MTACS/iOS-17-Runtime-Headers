
@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    NSURL * _baseURL;
    CoreDAVHrefItem * _virtualHref;
}

- (void).cxx_destruct;
- (id)description;
- (id)href;
- (void)parserSuggestsBaseURL:(id)arg1;
- (void)setPayload:(id)arg1;

@end
