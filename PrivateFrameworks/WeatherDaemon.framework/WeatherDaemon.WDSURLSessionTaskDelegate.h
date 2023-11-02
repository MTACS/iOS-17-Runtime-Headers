
@interface WeatherDaemon.WDSURLSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void _activity;
    void _taskMetrics;
    void taskContainsSensitiveData;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didCreateTask:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)init;

@end
