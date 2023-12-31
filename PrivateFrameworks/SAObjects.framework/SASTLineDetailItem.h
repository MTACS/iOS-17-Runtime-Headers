
@interface SASTLineDetailItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;

+ (id)lineDetailItem;
+ (id)lineDetailItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTitle:(id)arg1;
- (id)title;

@end
