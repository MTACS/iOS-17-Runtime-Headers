
@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {
    CoreDAVLeafItem * _commonName;
    CoreDAVHrefItem * _href;
}

@property (nonatomic, retain) CoreDAVLeafItem *commonName;
@property (nonatomic, retain) CoreDAVHrefItem *href;

- (void).cxx_destruct;
- (id)commonName;
- (id)copyParseRules;
- (id)href;
- (id)init;
- (void)setCommonName:(id)arg1;
- (void)setHref:(id)arg1;

@end
