
@interface CalMigrationUtilities : NSObject

+ (id)calendarDirectoryForHomeDirectory:(id)arg1;
+ (void)clearPreviousMigrationResultsWithDatabaseFileURL:(id)arg1;
+ (void)enumerateSelfAndDetachedEventsWithEvent:(void*)arg1 usingBlock:(id /* block */)arg2;
+ (id)homeRelativePathForURL:(id)arg1 inCalendarDirectory:(id)arg2;
+ (id)subdirectoriesInDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2 error:(id*)arg3;
+ (id)validatedCalendarDirectoryForHomeDirectory:(id)arg1;

@end
