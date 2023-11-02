
@interface SADialogInflectWordCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defaultToSemantic;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *semanticFeatureName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)inflectWordCommand;
+ (id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (bool)defaultToSemantic;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)label;
- (id)locale;
- (bool)requiresResponse;
- (id)semanticFeatureName;
- (void)setConstraints:(id)arg1;
- (void)setDefaultToSemantic:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSemanticFeatureName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
