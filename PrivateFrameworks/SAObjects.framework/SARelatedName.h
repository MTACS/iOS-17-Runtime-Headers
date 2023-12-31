
@interface SARelatedName : AceObject <SAAceComparable, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)relatedName;
+ (id)relatedNameWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)label;
- (id)name;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;

@end
