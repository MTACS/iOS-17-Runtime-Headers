
@interface CalDAVCompItem : CoreDAVItem {
    NSString * _nameAttribute;
}

@property (nonatomic, retain) NSString *nameAttribute;

- (void).cxx_destruct;
- (id)init;
- (id)nameAttribute;
- (void)parserFoundAttributes:(id)arg1;
- (void)setNameAttribute:(id)arg1;
- (void)write:(id)arg1;

@end
