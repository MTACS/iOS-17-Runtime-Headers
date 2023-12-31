
@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {
    long long  _created;
    long long  _deleted;
    long long  _updated;
}

@property (nonatomic) long long created;
@property (nonatomic) long long deleted;
@property (nonatomic) long long updated;

- (id)copyParseRules;
- (long long)created;
- (long long)deleted;
- (id)init;
- (void)setCreated:(long long)arg1;
- (void)setCreatedItem:(id)arg1;
- (void)setDeleted:(long long)arg1;
- (void)setDeletedItem:(id)arg1;
- (void)setUpdated:(long long)arg1;
- (void)setUpdatedItem:(id)arg1;
- (long long)updated;

@end
