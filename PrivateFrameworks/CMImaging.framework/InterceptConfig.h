
@interface InterceptConfig : NSObject {
    FigMetalExecutionStatus * _executionStatus;
    int  _interceptLevel;
    bool  _waitUntilCompleted;
    bool  _waitUntilScheduled;
}

@property (nonatomic, retain) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) int interceptLevel;
@property (nonatomic) bool waitUntilCompleted;
@property (nonatomic) bool waitUntilScheduled;

- (void).cxx_destruct;
- (id)executionStatus;
- (id)initWithLevel:(int)arg1;
- (int)interceptLevel;
- (void)loadExperimentsConfig;
- (void)setExecutionStatus:(id)arg1;
- (void)setInterceptLevel:(int)arg1;
- (void)setWaitUntilCompleted:(bool)arg1;
- (void)setWaitUntilScheduled:(bool)arg1;
- (bool)waitUntilCompleted;
- (bool)waitUntilScheduled;

@end
