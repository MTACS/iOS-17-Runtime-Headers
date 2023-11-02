
@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (nonatomic, copy) NSString *attributionPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)attributionItem;
+ (id)attributionItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)attributionPosition;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setAction:(id)arg1;
- (void)setAttributionPosition:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
