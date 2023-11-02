
@interface PKObjectDownload : NSObject {
    NSMutableSet * _completionHandlers;
    NSURLSessionDataTask * _task;
}

@property (nonatomic, retain) NSMutableSet *completionHandlers;
@property (nonatomic, copy) NSURLSessionDataTask *task;

- (void).cxx_destruct;
- (id)completionHandlers;
- (id)init;
- (void)setCompletionHandlers:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
