
@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *queries;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getIntentDefinitions;
+ (id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)queries;
- (bool)requiresResponse;
- (void)setQueries:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (bool)_matchesIntentDefinition:(id)arg1;
- (void)ins_getIntentDefinitionsWithCompletionHandler:(id /* block */)arg1;

@end
