
@interface SAUIDomainObjectPicker : SAUISnippet

@property (nonatomic, copy) NSString *idNodeName;

+ (id)domainObjectPicker;
+ (id)domainObjectPickerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)idNodeName;
- (void)setIdNodeName:(id)arg1;

@end
