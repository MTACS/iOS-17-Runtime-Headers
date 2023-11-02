
@interface PFDispatchingFairPlayValidationManaging : NSObject <PFFairPlayValidationManaging> {
    void responseQueue;
    void wrappedInstance;
}

+ (id)receiveOn:(id)arg1 manager:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)validateDownloadedEpisodesWithCompletion:(id /* block */)arg1;

@end
