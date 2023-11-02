
@interface FaceTimeMessageStore.VideoMessagingServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void listener;
    void videoMessagingDataSource;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
