
@interface GTTransportMessageReplyContinuation_capture : GTContinuation_capture {
    unsigned int  replyCount;
    unsigned long long  timeout;
}

- (void)dispatchError:(id)arg1;

@end
