
@interface CACCommandImportExportUtilities : NSObject

+ (id)defaultExportURL;
+ (id)exportToURL:(id)arg1;
+ (id)importFromURL:(id)arg1;
+ (bool)isSupportedCommandType:(id)arg1;
+ (unsigned long long)maximumNumberOfAllowedEntries;

@end
