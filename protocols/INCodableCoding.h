
@protocol INCodableCoding <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)dictionaryRepresentationWithLocalizer:(INStringLocalizer *)arg1;
- (void)updateWithDictionary:(NSDictionary *)arg1;

@end
