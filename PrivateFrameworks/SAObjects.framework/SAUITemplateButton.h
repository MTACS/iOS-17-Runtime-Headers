
@interface SAUITemplateButton : SAUITemplateBaseItem

@property (nonatomic, retain) SAUIImageResource *backgroundImage;
@property (nonatomic, copy) NSString *backgroundImageStyle;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSNumber *generateForegroundAppSearchButtonLabel;
@property (nonatomic, copy) NSDictionary *highlightedTitles;
@property (nonatomic, copy) NSDictionary *titles;

+ (id)button;
+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;

- (id)backgroundImage;
- (id)backgroundImageStyle;
- (id)commands;
- (id)encodedClassName;
- (id)generateForegroundAppSearchButtonLabel;
- (id)groupIdentifier;
- (id)highlightedTitles;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageStyle:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setGenerateForegroundAppSearchButtonLabel:(id)arg1;
- (void)setHighlightedTitles:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titles;

@end
