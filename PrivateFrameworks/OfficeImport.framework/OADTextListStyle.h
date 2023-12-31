
@interface OADTextListStyle : NSObject {
    NSString * mLanguage;
    NSMutableArray * mParagraphProperties;
}

@property (nonatomic, retain) NSString *language;

+ (id)defaultObject;

- (void).cxx_destruct;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)defaultProperties;
- (id)description;
- (void)enumerateParagraphPropertiesUsingBlock:(id /* block */)arg1;
- (void)flatten;
- (id)init;
- (id)initWithDefaults;
- (id)language;
- (void)overrideWithTextStyle:(id)arg1;
- (id)propertiesForListLevel:(unsigned long long)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setLanguage:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2;

@end
