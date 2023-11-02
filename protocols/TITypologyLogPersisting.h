
@protocol TITypologyLogPersisting

@required

+ (bool)isTraceLogFilename:(NSString *)arg1;
+ (bool)isTypologyLogFilename:(NSString *)arg1;
+ (NSString *)traceLogFilenameFromTypologyLogFilename:(NSString *)arg1;
+ (NSURL *)traceLogURLFromTypologyLogURL:(NSURL *)arg1;
+ (NSString *)typologyLogFilenameFromTraceLogFilename:(NSString *)arg1;
+ (TITypologyLog *)typologyLogFromTypologyLogFile:(NSURL *)arg1 andTraceLogFile:(NSURL *)arg2 error:(id*)arg3;
+ (NSURL *)typologyLogURLFromTraceLogURL:(NSURL *)arg1;

- (NSString *)filename;
- (NSDictionary *)propertyList;
- (NSDictionary *)propertyListWithTrace;
- (NSString *)recommendedTraceLogFilename;
- (NSString *)recommendedTypologyLogFilename;
- (NSMutableString *)trace;
- (unsigned long long)traceLogVersion;
- (unsigned long long)typologyLogVersion;
- (bool)writeToTypologyLogFile:(NSURL *)arg1 andTraceLogFile:(NSURL *)arg2 withAccessibilityInfo:(NSDictionary *)arg3 error:(id*)arg4;

@end
