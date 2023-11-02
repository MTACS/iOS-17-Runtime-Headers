
@interface HDRemoteAuthorizationRequestContext : NSObject {
    id /* block */  _completion;
    HKAuthorizationRequestRecord * _requestRecord;
    id /* block */  _requestSentHandler;
}

- (void).cxx_destruct;

@end
