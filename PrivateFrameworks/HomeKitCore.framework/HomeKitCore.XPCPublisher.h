
@interface HomeKitCore.XPCPublisher : NSObject <HomeKitCore.XPCModelPublisherInterface> {
    void cancelationHandler;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end
