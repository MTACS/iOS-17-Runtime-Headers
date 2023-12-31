
@interface SAProtobufMessage : SADomainObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *typeName;

+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setData:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;

@end
