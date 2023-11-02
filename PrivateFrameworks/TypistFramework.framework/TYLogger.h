
@interface TYLogger : NSObject

+ (void)closeLogFile;
+ (void)logToFile:(bool)arg1;
+ (void)logToSTDERR:(bool)arg1;
+ (id)openLogFile:(id)arg1;
+ (id)openLogFile:(id)arg1 inDirectory:(id)arg2;

@end
