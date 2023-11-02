
@interface SUScriptNumberFormatter : SUScriptObject {
    NSNumberFormatter * _numberFormatter;
}

@property (retain) NSString *localeIdentifier;
@property (retain) NSString *style;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)localeIdentifier;
- (id)numberFromString:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)style;

@end
