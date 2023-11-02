
@interface DiskImages2 : NSObject

+ (bool)attachWithParams:(id)arg1 handle:(id*)arg2 error:(id*)arg3;
+ (bool)convertWithParams:(id)arg1 error:(id*)arg2;
+ (bool)createBlankWithParams:(id)arg1 error:(id*)arg2;
+ (bool)debugLogsEnabled;
+ (bool)embedUserDataWithParams:(id)arg1 error:(id*)arg2;
+ (bool)forwardLogs;
+ (id)imageURLFromDevice:(id)arg1 error:(id*)arg2;
+ (bool)managedAttachWithParams:(id)arg1 handle:(id*)arg2 error:(id*)arg3;
+ (bool)resizeWithParams:(id)arg1 error:(id*)arg2;
+ (bool)retrieveInfoWithParams:(id)arg1 error:(id*)arg2;
+ (bool)retrieveUserDataWithParams:(id)arg1 error:(id*)arg2;
+ (void)setDebugLogsEnabled:(bool)arg1;
+ (void)setForwardLogs:(bool)arg1;
+ (bool)verifyWithParams:(id)arg1 error:(id*)arg2;

@end
