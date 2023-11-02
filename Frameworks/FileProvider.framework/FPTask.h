
@interface FPTask : NSObject {
    NSArray * _argv;
    NSFileHandle * _standardError;
    NSFileHandle * _standardOutput;
    int  _waitStatus;
}

@property (nonatomic, retain) NSArray *argv;
@property (nonatomic, retain) NSFileHandle *standardError;
@property (nonatomic, retain) NSFileHandle *standardOutput;
@property (nonatomic, readonly) int waitStatus;

+ (bool)exec:(id)arg1 stdoutString:(id*)arg2 stderrString:(id*)arg3;
+ (id)sanitizeStringForFilename:(id)arg1;
+ (id)taskWithArguments:(id)arg1;
+ (id)taskWithCommand:(id)arg1;
+ (id)taskWithCommandWithArguments:(id)arg1;
+ (id)taskWithRedirectedOutputAndCommand:(id)arg1;

- (void).cxx_destruct;
- (int)_prepareRedirections:(void**)arg1;
- (id)argv;
- (int)exec;
- (int)execAsync;
- (id)init;
- (void)resetRedirect;
- (void)setArgv:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommandWithArguments:(id)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (id)standardError;
- (id)standardOutput;
- (int)waitStatus;

@end
