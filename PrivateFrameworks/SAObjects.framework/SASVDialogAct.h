
@interface SASVDialogAct : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SASVDialogNode *parametersRoot;
@property (readonly) Class superclass;

+ (id)dialogAct;
+ (id)dialogActWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (id)parametersRoot;
- (void)setName:(id)arg1;
- (void)setParametersRoot:(id)arg1;

@end
