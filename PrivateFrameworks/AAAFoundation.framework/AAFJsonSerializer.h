
@interface AAFJsonSerializer : AAFDefaultSerializer

- (id)_dataFromDictionary:(id)arg1 error:(out id*)arg2;
- (id)_dictionaryFromObject:(id)arg1 error:(out id*)arg2;
- (id)mediaTypes;

@end
