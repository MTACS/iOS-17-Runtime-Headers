
@interface BRTask : NSObject {
    NSArray * _argv;
    NSString * _redirectStderrToFileAtPath;
    int  _redirectStderrToFileDescriptor;
    NSString * _redirectStdoutToFileAtPath;
    int  _redirectStdoutToFileDescriptor;
    int  _waitStatus;
}

@property (nonatomic, retain) NSArray *argv;
@property (nonatomic, retain) NSString *redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor;
@property (nonatomic, retain) NSString *redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor;
@property (nonatomic, readonly) int waitStatus;

+ (id)sanitizeStringForFilename:(id)arg1;
+ (id)taskWithCommand:(id)arg1;
+ (id)taskWithCommandWithArguments:(id)arg1;

- (void).cxx_destruct;
- (id)argv;
- (int)exec;
- (id)init;
- (id)redirectStderrToFileAtPath;
- (int)redirectStderrToFileDescriptor;
- (id)redirectStdoutToFileAtPath;
- (int)redirectStdoutToFileDescriptor;
- (void)resetRedirect;
- (void)setArgv:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommandWithArguments:(id)arg1;
- (void)setRedirectStderrToFileAtPath:(id)arg1;
- (void)setRedirectStderrToFileDescriptor:(int)arg1;
- (void)setRedirectStdoutToFileAtPath:(id)arg1;
- (void)setRedirectStdoutToFileDescriptor:(int)arg1;
- (int)waitStatus;

@end
