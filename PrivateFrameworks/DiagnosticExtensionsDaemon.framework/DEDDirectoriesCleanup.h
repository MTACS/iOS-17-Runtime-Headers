
@interface DEDDirectoriesCleanup : NSObject

+ (void)didRun;
+ (bool)isDryRun;
+ (void)run;
+ (bool)shouldRun;

@end
