
@interface CAMPendingRemotePersistenceWrapper : NSObject {
    id /* block */  _completionHandler;
    NSDate * _creationDate;
    NSMutableDictionary * _job;
    NSString * _loggingIdentifier;
    CAMCaptureRequest * _request;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSMutableDictionary *job;
@property (nonatomic, readonly, copy) NSString *loggingIdentifier;
@property (nonatomic, readonly) CAMCaptureRequest *request;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)creationDate;
- (id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 loggingIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)job;
- (id)loggingIdentifier;
- (id)request;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
