
@interface SKTask : NSObject <NSProgressReporting, SKWaitable> {
    NSProgress * _progress;
    NSFileHandle * _stderrHandle;
    <SKTaskDataParser> * _stderrParser;
    NSFileHandle * _stdoutHandle;
    <SKTaskDataParser> * _stdoutParser;
    NSTask * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSProgress *progress;
@property (readonly) NSFileHandle *stderrHandle;
@property (nonatomic, retain) <SKTaskDataParser> *stderrParser;
@property (readonly) NSFileHandle *stdoutHandle;
@property (nonatomic, retain) <SKTaskDataParser> *stdoutParser;
@property (readonly) Class superclass;
@property (readonly) NSTask *task;

- (void).cxx_destruct;
- (bool)endedSuccessfully;
- (id)initWithExecutable:(id)arg1;
- (id)initWithExecutable:(id)arg1 arguments:(id)arg2;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)setStderrParser:(id)arg1;
- (void)setStdoutParser:(id)arg1;
- (id)stderrHandle;
- (id)stderrParser;
- (id)stdoutHandle;
- (id)stdoutParser;
- (id)task;
- (bool)waitWithError:(id*)arg1;

@end
