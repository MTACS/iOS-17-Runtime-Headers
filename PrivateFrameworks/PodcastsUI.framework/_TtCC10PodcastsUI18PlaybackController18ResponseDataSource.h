
@interface _TtCC10PodcastsUI18PlaybackController18ResponseDataSource : NSObject <MPRequestResponseControllerDelegate> {
    void pathCoordinator;
    void playerRequestController;
    void request;
    void responsePublisher;
    void subscriptions;
}

- (void).cxx_destruct;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)dealloc;
- (id)init;

@end
