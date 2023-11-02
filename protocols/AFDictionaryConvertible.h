
@protocol AFDictionaryConvertible <NSObject>

@required

- (NSDictionary *)buildDictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(NSDictionary *)arg1;

@end
