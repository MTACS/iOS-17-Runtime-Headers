
@interface CalMigrationToolArgumentParser : NSObject

+ (void)_appendToArguments:(id)arg1 ifNeededForTriStateOption:(long long)arg2 forceEnableArgument:(id)arg3 forceDisableArgument:(id)arg4;
+ (unsigned long long)_argumentFromCommandLineArgument:(id)arg1;
+ (id)_argumentParseErrorWithCode:(unsigned long long)arg1 argument:(id)arg2;
+ (id)commandLineArgumentsForToolOptions:(id)arg1;
+ (id)parseOptionsFromCommandLineArguments:(id)arg1 printUsage:(bool*)arg2 error:(id*)arg3;
+ (id)usageStringWithToolPath:(id)arg1 parseError:(id)arg2;

@end
