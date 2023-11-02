
@interface RPReceivedMessageEntry : NSObject {
    NSDictionary * _event;
    NSString * _eventID;
    NSDictionary * _options;
    NSDictionary * _request;
    NSString * _requestID;
    id /* block */  _responseHandler;
    NSNumber * _sessionID;
}

@property (nonatomic, copy) NSDictionary *event;
@property (nonatomic, copy) NSString *eventID;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSDictionary *request;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, copy) NSNumber *sessionID;

- (void).cxx_destruct;
- (id)event;
- (id)eventID;
- (id)options;
- (id)request;
- (id)requestID;
- (id /* block */)responseHandler;
- (id)sessionID;
- (void)setEvent:(id)arg1;
- (void)setEventID:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSessionID:(id)arg1;

@end
