
@interface _HDRemoteAuthorizationRecord : NSObject {
    HKAuthorizationRequestRecord * _record;
    id /* block */  _requestFinishedHandler;
    id /* block */  _requestSentHandler;
}

- (void).cxx_destruct;

@end
