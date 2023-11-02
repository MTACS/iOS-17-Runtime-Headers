
@interface NPTTaskMetrics : NSObject {
    NPTMetricResult * _results;
    NSURLSessionDataTask * _task;
    NSURLSessionTaskMetrics * _taskMetrics;
}

@property (nonatomic, retain) NPTMetricResult *results;
@property (nonatomic, retain) NSURLSessionDataTask *task;
@property (nonatomic, retain) NSURLSessionTaskMetrics *taskMetrics;

- (void).cxx_destruct;
- (id)init;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (id)task;
- (id)taskMetrics;

@end
