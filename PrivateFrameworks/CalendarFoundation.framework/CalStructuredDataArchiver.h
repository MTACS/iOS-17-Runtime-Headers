
@interface CalStructuredDataArchiver : NSObject

+ (id)archiveDictionary:(id)arg1 error:(id*)arg2;
+ (id)archiveDictionary:(id)arg1 permittedClasses:(id)arg2 error:(id*)arg3;
+ (id)archiveDictionary:(id)arg1 permittedClasses:(id)arg2 strict:(bool)arg3 error:(id*)arg4;
+ (id)defaultPermittedClasses;
+ (id)unarchiveDictionaryFromData:(id)arg1 error:(id*)arg2;
+ (id)unarchiveDictionaryFromData:(id)arg1 permittedClasses:(id)arg2 error:(id*)arg3;
+ (id)unarchiveDictionaryFromData:(id)arg1 permittedClasses:(id)arg2 strict:(bool)arg3 error:(id*)arg4;

@end
