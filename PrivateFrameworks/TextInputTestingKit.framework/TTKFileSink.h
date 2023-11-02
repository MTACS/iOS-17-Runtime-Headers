
@interface TTKFileSink : NSObject <TTKTestCaseSink> {
    NSString * _fileName;
    NSString * _inputMode;
    NSDictionary * _layouts;
    int  _testCaseIndex;
    NSMutableArray * _testCases;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLayouts:(id)arg1;
- (void)close;
- (void)flush;
- (id)generateData;
- (id)generateLayouts;
- (id)generateTestCases;
- (id)init:(id)arg1 inputMode:(id)arg2 layouts:(id)arg3;
- (void)pushNextTestCase:(id)arg1;

@end
