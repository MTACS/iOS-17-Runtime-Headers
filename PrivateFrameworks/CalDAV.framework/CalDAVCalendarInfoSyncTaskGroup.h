
@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup {
    bool  _fetchSharees;
}

@property (nonatomic) bool fetchSharees;

- (Class)containerItemClass;
- (id)copyContainerParserMappings;
- (bool)fetchSharees;
- (void)setFetchSharees:(bool)arg1;

@end
