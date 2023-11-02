
@interface ATXHeroEntriesReader : NSObject

+ (id)appAndClipEntryFromPbEntries:(id)arg1 position:(unsigned long long)arg2;
+ (id)loadAppAndClipEntriesFromData:(id)arg1;
+ (id)loadAppAndClipEntriesFromFileURL:(id)arg1;
+ (bool)validateReader:(id)arg1 pbEntries:(id)arg2;

@end
