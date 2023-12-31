
@interface SAAceResult : SABaseAceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SAAceSerializable> *result;
@property (readonly) Class superclass;

+ (id)aceResult;
+ (id)aceResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)result;
- (void)setResult:(id)arg1;

@end
