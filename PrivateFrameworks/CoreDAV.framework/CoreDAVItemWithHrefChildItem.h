
@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {
    CoreDAVHrefItem * _href;
}

@property (nonatomic, retain) CoreDAVHrefItem *href;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)href;
- (void)setHref:(id)arg1;
- (void)write:(id)arg1;

@end
