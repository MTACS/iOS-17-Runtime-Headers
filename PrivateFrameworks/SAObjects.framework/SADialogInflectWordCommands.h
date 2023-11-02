
@interface SADialogInflectWordCommands : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inflectWordCommands;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)inflectWordCommands;
+ (id)inflectWordCommandsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)inflectWordCommands;
- (bool)requiresResponse;
- (void)setInflectWordCommands:(id)arg1;

@end
