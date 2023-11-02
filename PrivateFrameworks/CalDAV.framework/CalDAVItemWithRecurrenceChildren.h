
@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem {
    NSMutableSet * _recurrences;
}

@property (nonatomic, retain) NSMutableSet *recurrences;

- (void).cxx_destruct;
- (void)addRecurrence:(id)arg1;
- (id)copyParseRules;
- (id)recurrences;
- (void)setRecurrences:(id)arg1;

@end
