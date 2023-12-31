
@interface SAUITemplateRange : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long length;
@property (nonatomic) long long location;
@property (readonly) Class superclass;

+ (id)range;
+ (id)rangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)length;
- (long long)location;
- (void)setLength:(long long)arg1;
- (void)setLocation:(long long)arg1;

@end
