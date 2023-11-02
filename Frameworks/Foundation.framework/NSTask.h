
@interface NSTask : NSObject

@property (copy) NSArray *arguments;
@property (copy) NSURL *currentDirectoryURL;
@property (copy) NSDictionary *environment;
@property (copy) NSURL *executableURL;
@property (readonly) int processIdentifier;
@property long long qualityOfService;
@property (getter=isRunning, readonly) bool running;
@property (retain) id standardError;
@property (retain) id standardInput;
@property (retain) id standardOutput;
@property (copy) id /* block */ terminationHandler;
@property (readonly) long long terminationReason;
@property (readonly) int terminationStatus;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id*)arg3 terminationHandler:(id /* block */)arg4;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;

- (id)arguments;
- (id)currentDirectoryPath;
- (id)currentDirectoryURL;
- (id)environment;
- (id)executableURL;
- (id)init;
- (void)interrupt;
- (bool)isRunning;
- (bool)isSpawnedProcessDisclaimed;
- (void)launch;
- (bool)launchAndReturnError:(id*)arg1;
- (id)launchPath;
- (int)processIdentifier;
- (long long)qualityOfService;
- (bool)resume;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setCurrentDirectoryURL:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExecutableURL:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSpawnedProcessDisclaimed:(bool)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id)standardError;
- (id)standardInput;
- (id)standardOutput;
- (bool)suspend;
- (long long)suspendCount;
- (void)terminate;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (int)terminationStatus;

// Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity

+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 error:(id*)arg3;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 launchHandler:(id /* block */)arg3 didLaunch:(bool*)arg4 error:(id*)arg5;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 launchHandler:(id /* block */)arg3 reply:(id /* block */)arg4;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 error:(id*)arg4;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 launchHandler:(id /* block */)arg4 didLaunch:(bool*)arg5 error:(id*)arg6;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 launchHandler:(id /* block */)arg4 reply:(id /* block */)arg5;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 reply:(id /* block */)arg4;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 error:(id*)arg4;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 launchHandler:(id /* block */)arg4 didLaunch:(bool*)arg5 error:(id*)arg6;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 launchHandler:(id /* block */)arg4 reply:(id /* block */)arg5;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 reply:(id /* block */)arg4;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 error:(id*)arg4;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 launchHandler:(id /* block */)arg4 didLaunch:(bool*)arg5 error:(id*)arg6;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 launchHandler:(id /* block */)arg4 reply:(id /* block */)arg5;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 reply:(id /* block */)arg4;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 reply:(id /* block */)arg3;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputData:(id)arg4 errorData:(id)arg5 launchHandler:(id /* block */)arg6 didLaunch:(bool*)arg7 error:(id*)arg8;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputData:(id)arg4 errorData:(id)arg5 launchHandler:(id /* block */)arg6 reply:(id /* block */)arg7;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFileHandle:(id)arg4 errorFileHandle:(id)arg5 launchHandler:(id /* block */)arg6 didLaunch:(bool*)arg7 error:(id*)arg8;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFileHandle:(id)arg4 errorFileHandle:(id)arg5 launchHandler:(id /* block */)arg6 reply:(id /* block */)arg7;
+ (bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFilePath:(id)arg4 errorFilePath:(id)arg5 redirectErrorToOutput:(bool)arg6 launchHandler:(id /* block */)arg7 didLaunch:(bool*)arg8 error:(id*)arg9;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFilePath:(id)arg4 errorFilePath:(id)arg5 redirectErrorToOutput:(bool)arg6 launchHandler:(id /* block */)arg7 reply:(id /* block */)arg8;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 startBlock:(id /* block */)arg4 updateBlock:(id /* block */)arg5 endBlock:(id /* block */)arg6;

@end
