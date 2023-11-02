
@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {
    NSString * _nameAttribute;
    NSString * _typeAttribute;
}

@property (nonatomic, retain) NSString *nameAttribute;
@property (nonatomic, retain) NSString *typeAttribute;

- (void).cxx_destruct;
- (id)nameAttribute;
- (void)parserFoundAttributes:(id)arg1;
- (void)setNameAttribute:(id)arg1;
- (void)setTypeAttribute:(id)arg1;
- (id)typeAttribute;

@end
