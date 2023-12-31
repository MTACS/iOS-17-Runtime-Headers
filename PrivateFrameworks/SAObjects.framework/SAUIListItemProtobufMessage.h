
@interface SAUIListItemProtobufMessage : SAAceView

@property (nonatomic, copy) NSData *dynamicURLImageResourceData;
@property (nonatomic, copy) NSData *dynamicURLImageResourceDataEvodBumper;

+ (id)listItemProtobufMessage;
+ (id)listItemProtobufMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)dynamicURLImageResourceData;
- (id)dynamicURLImageResourceDataEvodBumper;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDynamicURLImageResourceData:(id)arg1;
- (void)setDynamicURLImageResourceDataEvodBumper:(id)arg1;

@end
