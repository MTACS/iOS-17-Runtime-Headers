
@interface SAIntentGroupSnippet : SAUISnippet

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intentResponse;
@property (nonatomic, copy) NSString *jsonEncodedIntent;
@property (nonatomic, copy) NSString *jsonEncodedIntentResponse;
@property (nonatomic, retain) <SAServerBoundCommand> *processSynapseFlowCommand;
@property (nonatomic, copy) NSArray *snippetTemplates;
@property (nonatomic) bool widgetAllowed;
@property (nonatomic, copy) NSNumber *widgetIndex;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentResponse;
- (id)jsonEncodedIntent;
- (id)jsonEncodedIntentResponse;
- (id)processSynapseFlowCommand;
- (void)setAppId:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setIntentResponse:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;
- (void)setJsonEncodedIntentResponse:(id)arg1;
- (void)setProcessSynapseFlowCommand:(id)arg1;
- (void)setSnippetTemplates:(id)arg1;
- (void)setWidgetAllowed:(bool)arg1;
- (void)setWidgetIndex:(id)arg1;
- (id)snippetTemplates;
- (bool)widgetAllowed;
- (id)widgetIndex;

@end
