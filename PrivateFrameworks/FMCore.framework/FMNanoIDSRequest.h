
@interface FMNanoIDSRequest : NSObject {
    NSString * _idsMessageID;
    id /* block */  _responseHandler;
    FMDispatchTimer * _timer;
}

@property (nonatomic, retain) NSString *idsMessageID;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) FMDispatchTimer *timer;

- (void).cxx_destruct;
- (id)idsMessageID;
- (id /* block */)responseHandler;
- (void)setIdsMessageID:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
