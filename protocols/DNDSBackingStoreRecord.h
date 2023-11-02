
@protocol DNDSBackingStoreRecord <NSObject>

@required

+ (id)newWithDictionaryRepresentation:(NSDictionary *)arg1 context:(DNDSBackingStoreDictionaryContext *)arg2;

- (NSDictionary *)dictionaryRepresentationWithContext:(DNDSBackingStoreDictionaryContext *)arg1;

@end
