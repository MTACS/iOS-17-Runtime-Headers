
@interface TTKDirSource : NSObject <TTKTestCaseSource> {
    NSString * _currDir;
    NSObject<TTKTestCaseSource> * _currTestCaseSource;
    float  _fileVersion;
    NSString * _inputMode;
    bool  _is_multiDir;
    NSMutableDictionary * _layouts;
    int  _majorVersion;
    int  _minorVersion;
    id /* block */  _onNewLayoutsFound;
    NSString * _rootDir;
    NSMutableArray * _testCaseDirs;
    NSMutableArray * _testCaseFiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float fileVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inputMode;
@property (nonatomic, readonly, copy) NSDictionary *layouts;
@property (nonatomic, readonly) int majorVersion;
@property (nonatomic, readonly) int minorVersion;
@property (nonatomic, copy) id /* block */ onNewLayoutsFound;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (float)fileVersion;
- (id)getNextTestCase;
- (id)init:(id)arg1;
- (id)inputMode;
- (id)layouts;
- (void)loadLayouts:(id)arg1;
- (void)loadRootDir;
- (int)majorVersion;
- (int)minorVersion;
- (id /* block */)onNewLayoutsFound;
- (void)reset;
- (void)setOnNewLayoutsFound:(id /* block */)arg1;

@end
