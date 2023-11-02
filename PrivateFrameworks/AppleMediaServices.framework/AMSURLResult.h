
@interface AMSURLResult : NSObject {
    NSData * _data;
    NSDictionary * _loadURLEventDictionary;
    NSString * _logUUID;
    id  _object;
    NSURLResponse * _response;
    NSURLSessionTask * _task;
    NSURLSessionTaskMetrics * _taskMetrics;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) NSDictionary *loadURLEventDictionary;
@property (nonatomic, retain) NSString *logUUID;
@property (nonatomic, retain) id object;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic, readonly) NSString *responseCorrelationId;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, readonly) long long responseStatusCode;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic, readonly) NSURLSessionTaskMetrics *taskMetrics;

- (void).cxx_destruct;
- (id)data;
- (id)initWithResult:(id)arg1;
- (id)initWithTask:(id)arg1 response:(id)arg2 data:(id)arg3 object:(id)arg4;
- (id)initWithTaskInfo:(id)arg1 object:(id)arg2;
- (id)loadURLEventDictionary;
- (id)logUUID;
- (id)object;
- (id)response;
- (id)responseCorrelationId;
- (id)responseHeaders;
- (long long)responseStatusCode;
- (void)setData:(id)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;
- (id)taskMetrics;

@end
