
@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (nonatomic, copy) NSDictionary *backgroundColors;
@property (nonatomic, copy) NSDictionary *textColors;
@property (nonatomic, copy) NSArray *titles;

+ (id)segmentedControl;
+ (id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2;

- (id)backgroundColors;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setBackgroundColors:(id)arg1;
- (void)setTextColors:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)textColors;
- (id)titles;

@end
