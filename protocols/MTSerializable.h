
@protocol MTSerializable <NSObject, NSSecureCoding>

@required

- (id)initFromDeserializer:(id <MTSerializer>)arg1;
- (void)serializeWithSerializer:(id <MTSerializer>)arg1;

@end
