
@protocol AVAirSerializationProtocol <NSObject>

@required

+ (NSArray *)airRepresentationForArray:(NSArray *)arg1;
+ (NSArray *)itemArrayWithAirRepresentations:(NSArray *)arg1;
+ (id)itemWithAirDictionaryRepresentation:(NSDictionary *)arg1;

- (NSDictionary *)airDictionaryRepresentation;

@end
