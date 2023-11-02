
@protocol STSerializableManagedObject <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)updateWithDictionaryRepresentation:(NSDictionary *)arg1;

@end
