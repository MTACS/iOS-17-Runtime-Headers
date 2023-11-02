
@interface TTKDirSink : NSObject <TTKTestCaseSink> {
    NSString * _currDir;
    unsigned int  _dirCounter;
    unsigned int  _fileCounter;
    NSString * _inputMode;
    NSDictionary * _layouts;
    unsigned int  _maxFilesPerDirectory;
    unsigned int  _maxTestCasesPerFile;
    NSString * _rootDir;
    NSMutableArray * _testCaseDirs;
    NSMutableArray * _testCaseFiles;
    NSMutableArray * _testCasesToWrite;
    bool  _writeOnFlush;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLayouts:(id)arg1;
- (void)close;
- (void)flush;
- (void)flushFiles;
- (id)init:(id)arg1 inputMode:(id)arg2 layouts:(id)arg3 writeOnFlush:(bool)arg4 maxTestCasesPerFile:(unsigned int)arg5 maxFilesPerDirectory:(unsigned int)arg6;
- (void)pushNextTestCase:(id)arg1;

@end
