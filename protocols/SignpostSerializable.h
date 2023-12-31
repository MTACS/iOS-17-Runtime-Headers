
@protocol SignpostSerializable <NSObject>

@required

+ (NSNumber *)serializationTypeNumber;

- (NSDictionary *)humanReadableDictionaryRepresentation;
- (NSString *)humanReadableType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializeableDictionaryWithShouldRedact:(bool)arg1;

@end
