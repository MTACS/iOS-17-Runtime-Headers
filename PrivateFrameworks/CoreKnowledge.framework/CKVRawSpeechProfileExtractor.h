
@interface CKVRawSpeechProfileExtractor : NSObject

+ (id)_convertItemsFromEntities:(id)arg1 categoryName:(id)arg2 categoryMetadata:(id)arg3 converter:(id)arg4 error:(id*)arg5;
+ (id)_dictionaryFromUserDataArray:(id)arg1 error:(id*)arg2;
+ (id)_extractEntitiesFromCategoryData:(id)arg1 categoryName:(id)arg2 error:(id*)arg3;
+ (id)_extractNamespaceFromCategoryName:(id)arg1 error:(id*)arg2;
+ (id)_extractUserDataFromRawSpeechProfile:(id)arg1 error:(id*)arg2;
+ (bool)_isValidCategoryWithName:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)extractItemsFromRawSpeechProfile:(id)arg1 metadata:(id)arg2 converter:(id)arg3 error:(id*)arg4;
+ (id)extractLocaleFromRawSpeechProfile:(id)arg1 error:(id*)arg2;

@end
