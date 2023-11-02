
@protocol GCJSONRepresentable <NSObject>

@required

- (id)initWithJSONDictionaryRepresentation:(NSDictionary *)arg1;
- (NSDictionary *)jsonDictionaryRepresentation;

@end
