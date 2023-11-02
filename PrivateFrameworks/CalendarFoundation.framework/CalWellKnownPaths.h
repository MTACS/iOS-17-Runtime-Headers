
@interface CalWellKnownPaths : NSObject

+ (id)calendarFileHandlerPath;
+ (bool)checkOrCreatePath:(id)arg1;
+ (id)eventsPendingChangesPath;
+ (void)initialize;
+ (id)realHomeDirectoryPath;
+ (void)resetPaths;

@end
