
@interface _DPUploadHelper : NSObject

+ (id)ipsFilePathForDate:(id)arg1 useGMT:(bool)arg2;
+ (id)submissionFilePathInDirectory:(id)arg1 uploadName:(id)arg2 forDate:(id)arg3 useGMT:(bool)arg4 suffix:(id)arg5;
+ (id)writeDediscoSubmission:(id)arg1 toFileInDirectory:(id)arg2;
+ (id)writeFileForDA:(id)arg1;
+ (id)writeFileForDedisco:(id)arg1;
+ (id)writeFileForEN:(id)arg1;
+ (id)writeFileForParsec:(id)arg1;
+ (id)writeFileForParsec:(id)arg1 inDirectory:(id)arg2;

@end
