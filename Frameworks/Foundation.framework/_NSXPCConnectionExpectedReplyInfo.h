
@interface _NSXPCConnectionExpectedReplyInfo : NSObject {
    id /* block */  _errorBlock;
    NSXPCInterface * _interface;
    unsigned long long  _proxyNumber;
    NSBlock * _replyBlock;
    SEL  _selector;
    NSObject<OS_dispatch_semaphore> * _timeoutSemaphore;
    NSDictionary * _userInfo;
}

- (void)dealloc;

@end
