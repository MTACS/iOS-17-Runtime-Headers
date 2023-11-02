
@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {
    NSMutableSet * _comps;
}

@property (nonatomic, readonly) NSSet *compNames;
@property (nonatomic, retain) NSMutableSet *comps;

- (void).cxx_destruct;
- (void)addComp:(id)arg1;
- (id)childrenToWrite;
- (id)compNames;
- (id)componentsAsString;
- (id)comps;
- (id)copyParseRules;
- (id)description;
- (id)init;
- (void)setComps:(id)arg1;

@end
