
@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet * _componentSets;
}

+ (bool)allowedCalendars:(id)arg1 contains:(id)arg2;

- (void).cxx_destruct;
- (void)addCompSet:(id)arg1;
- (id)childrenToWrite;
- (id)componentsAsString;
- (id)copyParseRules;
- (id)description;
- (id)init;

@end
