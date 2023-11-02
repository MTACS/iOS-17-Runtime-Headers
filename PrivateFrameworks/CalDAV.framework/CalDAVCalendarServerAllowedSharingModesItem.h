
@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _canBePublished;
    CoreDAVItemWithNoChildren * _canBeShared;
    CoreDAVItemWithNoChildren * _isMarkedImmutableSharees;
    CoreDAVItemWithNoChildren * _isMarkedUndeletable;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *canBePublished;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *canBeShared;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *isMarkedImmutableSharees;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *isMarkedUndeletable;

- (void).cxx_destruct;
- (id)canBePublished;
- (id)canBeShared;
- (id)copyParseRules;
- (id)init;
- (id)isMarkedImmutableSharees;
- (id)isMarkedUndeletable;
- (void)setCanBePublished:(id)arg1;
- (void)setCanBeShared:(id)arg1;
- (void)setIsMarkedImmutableSharees:(id)arg1;
- (void)setIsMarkedUndeletable:(id)arg1;

@end
