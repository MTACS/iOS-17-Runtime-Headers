
@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement {
    int  _state;
}

@property (nonatomic, readonly) int state;

- (id)copyParseRules;
- (void)setPublish:(id)arg1;
- (void)setUnpublish:(id)arg1;
- (int)state;

@end
