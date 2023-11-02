
@interface DRSDecisionServerRequestReply : NSObject {
    NSString * _rejectionReason;
    id  _request;
    bool  _requestAccepted;
}

@property (nonatomic, readonly) NSString *rejectionReason;
@property (nonatomic, readonly) id request;
@property (nonatomic, readonly) bool requestAccepted;

- (void).cxx_destruct;
- (id)initWithOriginalRequest:(id)arg1 reply:(id)arg2;
- (id)initWithOriginalRequest:(id)arg1 requestAccepted:(bool)arg2 rejectionReason:(id)arg3;
- (id)rejectionReason;
- (id)request;
- (bool)requestAccepted;

@end
