
@interface POXSSimpleTypeDefinition : POXSDefinition <POXSDefinitionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (id)stringFromValue:(id)arg1;
- (id)valueFromString:(id)arg1;

@end
