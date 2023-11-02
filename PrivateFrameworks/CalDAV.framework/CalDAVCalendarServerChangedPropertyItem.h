
@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem {
    NSMutableSet * _changedParameters;
    NSString * _nameAttribute;
    NSString * _typeAttribute;
}

@property (nonatomic, retain) NSMutableSet *changedParameters;
@property (nonatomic, retain) NSString *nameAttribute;
@property (nonatomic, retain) NSString *typeAttribute;

- (void).cxx_destruct;
- (void)addChangedParameter:(id)arg1;
- (id)changedParameters;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)nameAttribute;
- (void)parserFoundAttributes:(id)arg1;
- (void)setChangedParameters:(id)arg1;
- (void)setNameAttribute:(id)arg1;
- (void)setTypeAttribute:(id)arg1;
- (id)typeAttribute;

@end
