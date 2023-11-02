
@interface NewsPersonalization.NewsTabiJournaler : NSObject <FCOperationThrottlerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  directory;
    void evictionThrottler;
    void limit;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;

@end
