
@interface CalDAVCalendarServerChangesItem : CoreDAVItem {
    NSMutableSet * _changedProperties;
}

@property (nonatomic, retain) NSMutableSet *changedProperties;

- (void).cxx_destruct;
- (void)addChangedProperty:(id)arg1;
- (id)changedProperties;
- (id)copyParseRules;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setChangedProperties:(id)arg1;

@end
