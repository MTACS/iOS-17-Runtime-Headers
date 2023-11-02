
@interface GTTelemetryRequestBatch : NSObject {
    id /* block */  _completionHandler;
    unsigned long long  _requestID;
    NSArray * _requests;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) unsigned long long requestID;
@property (nonatomic, retain) NSArray *requests;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)init;
- (id)initNoRequestID;
- (unsigned long long)requestID;
- (id)requests;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRequestID:(unsigned long long)arg1;
- (void)setRequests:(id)arg1;

@end
