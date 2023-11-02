
@interface TTKFileSource : NSObject <TTKTestCaseSource> {
    float  _fileVersion;
    NSString * _inputMode;
    NSDictionary * _layouts;
    int  _majorVersion;
    int  _minorVersion;
    id /* block */  _onNewLayoutsFound;
    int  _test_case_index;
    NSMutableArray * _test_cases;
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
- (id)init:(id)arg1 inputMode:(id)arg2 layouts:(id)arg3;
- (id)inputMode;
- (id)layouts;
- (int)majorVersion;
- (int)minorVersion;
- (id /* block */)onNewLayoutsFound;
- (bool)parseData:(id)arg1;
- (void)parseLayouts:(id)arg1;
- (void)reset;
- (void)setOnNewLayoutsFound:(id /* block */)arg1;

@end
