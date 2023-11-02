
@interface CACVocabularyImportExportUtilities : NSObject

+ (unsigned long long)_importVocabularyEntries:(id)arg1 didFindOverflow:(bool*)arg2;
+ (id)_localeIdentifiersRepresentedByVocabularyEntries:(id)arg1;
+ (id)_vocabularyEntriesFromSimpleTextListString:(id)arg1 usingLocaleIdentifier:(id)arg2;
+ (id)defaultExportURL;
+ (id)exportToURL:(id)arg1;
+ (id)importFromURL:(id)arg1;
+ (unsigned long long)maximumNumberOfAllowedEntries;

@end
