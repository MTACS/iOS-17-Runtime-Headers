
@interface SASVSystemDialogActOutput : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *dialogActs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)systemDialogActOutput;
+ (id)systemDialogActOutputWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogActs;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDialogActs:(id)arg1;

@end
