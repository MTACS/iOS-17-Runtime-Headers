
@interface IMDFileEventBroadcaster : NSObject {
    void fileEventStream;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)observeChangesInPath:(id)arg1;
- (void)stopObserving;

@end
