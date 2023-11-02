
@interface SAStructuredDictationItem : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resultOptions;
@property (readonly) Class superclass;

+ (id)structuredDictationItem;
+ (id)structuredDictationItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resultOptions;
- (void)setResultOptions:(id)arg1;

@end