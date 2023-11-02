
@protocol WFSerializableContent <NSObject>

@required

+ (id)objectWithWFSerializedRepresentation:(NSDictionary *)arg1;

- (NSDictionary *)wfSerializedRepresentation;

@end
