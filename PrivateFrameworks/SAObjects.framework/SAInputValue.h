
@interface SAInputValue : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inputValue;
@property (readonly) Class superclass;

+ (id)inputValue;
+ (id)inputValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)inputValue;
- (void)setInputValue:(id)arg1;

@end
