
@protocol FIDictionaryRepresentable

@required

+ (id)definitionFromDictionary:(NSDictionary *)arg1 error:(id*)arg2;

- (NSDictionary *)dictionaryRepresentation;

@end
