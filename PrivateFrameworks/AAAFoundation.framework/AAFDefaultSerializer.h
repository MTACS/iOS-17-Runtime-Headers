
@interface AAFDefaultSerializer : NSObject <AAFSerializer>

@property (readonly) NSArray *mediaTypes;

- (id)_className;
- (id)_dataFromDictionary:(id)arg1 error:(out id*)arg2;
- (id)_dictionaryFromObject:(id)arg1 error:(out id*)arg2;
- (void)_raiseException:(id)arg1;
- (id)dataFromDictionary:(id)arg1;
- (id)dataFromDictionary:(id)arg1 error:(out id*)arg2;
- (id)dictionaryFromObject:(id)arg1;
- (id)dictionaryFromObject:(id)arg1 error:(out id*)arg2;
- (id)mediaTypes;
- (id)stringFromData:(id)arg1;
- (id)stringFromDictionary:(id)arg1;

@end
