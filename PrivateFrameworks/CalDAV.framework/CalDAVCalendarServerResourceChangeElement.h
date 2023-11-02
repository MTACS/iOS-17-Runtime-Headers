
@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {
    CalDAVUpdateOwnerItem * _changedBy;
}

@property (nonatomic, retain) CalDAVUpdateOwnerItem *changedBy;
@property (nonatomic, readonly) NSURL *fullHrefURL;

- (void).cxx_destruct;
- (id)changedBy;
- (id)copyParseRules;
- (id)fullHrefURL;
- (id)init;
- (void)setChangedBy:(id)arg1;

@end
