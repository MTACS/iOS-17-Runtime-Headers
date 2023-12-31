
@interface IMRuntimeTestRun : NSObject {
    bool  _succeeded;
    IMRuntimeTest * _test;
}

@property (getter=hasSucceeded) bool succeeded;
@property (readonly) IMRuntimeTest *test;

- (void).cxx_destruct;
- (bool)hasSucceeded;
- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(bool)arg4;
- (void)setSucceeded:(bool)arg1;
- (void)start;
- (void)stop;
- (id)test;

@end
