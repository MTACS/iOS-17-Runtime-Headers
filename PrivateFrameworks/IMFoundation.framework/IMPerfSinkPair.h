
@interface IMPerfSinkPair : NSObject {
    <IMPerfProfilerBehavior> * _behavior;
    <IMPerfProfilerSink> * _sink;
}

@property (nonatomic, readonly) <IMPerfProfilerBehavior> *behavior;
@property (nonatomic, readonly) <IMPerfProfilerSink> *sink;

- (void).cxx_destruct;
- (id)behavior;
- (id)initWithBehavior:(id)arg1 sink:(id)arg2;
- (id)sink;

@end
