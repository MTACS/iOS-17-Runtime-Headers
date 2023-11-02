
@interface CalDAVCalendarColorItem : CoreDAVItem {
    NSString * _symbolicColorName;
}

@property (nonatomic, retain) NSString *colorString;
@property (nonatomic, retain) NSString *symbolicColorName;

- (void).cxx_destruct;
- (id)colorString;
- (id)init;
- (void)parserFoundAttributes:(id)arg1;
- (void)setColorString:(id)arg1;
- (void)setSymbolicColorName:(id)arg1;
- (id)symbolicColorName;
- (void)write:(id)arg1;

@end
