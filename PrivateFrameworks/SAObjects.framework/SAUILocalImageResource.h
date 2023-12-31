
@interface SAUILocalImageResource : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageCode;
@property (readonly) Class superclass;

+ (id)localImageResource;
+ (id)localImageResourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageCode;
- (void)setImageCode:(id)arg1;

@end
