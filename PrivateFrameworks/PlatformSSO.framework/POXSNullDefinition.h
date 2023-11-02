
@interface POXSNullDefinition : POXSDefinition <POXSDefinitionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (Class)typeForName:(id)arg1;

@end
