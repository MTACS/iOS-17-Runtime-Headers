
@interface RPTResizeTestParameters : NSObject <RPTTestParameters, _RPTCoordinateSpaces> {
    id /* block */  _completionHandler;
    RPTCoordinateSpaceConverter * _conversion;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumWindowSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumWindowSize;
    NSString * _testName;
    UIWindow * _window;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumWindowSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumWindowSize;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)conversion;
- (id)initWithTestName:(id)arg1 window:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })maximumWindowSize;
- (struct CGSize { double x1; double x2; })minimumWindowSize;
- (void)prepareWithComposer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversion:(id)arg1;
- (void)setMaximumWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTestName:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)testName;
- (id)window;

@end
