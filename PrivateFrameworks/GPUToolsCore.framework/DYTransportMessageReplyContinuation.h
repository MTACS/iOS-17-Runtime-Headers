
@interface DYTransportMessageReplyContinuation : DYContinuation {
    unsigned int  replyCount;
    unsigned long long  timeout;
}

- (void)dispatchError:(id)arg1;

@end
