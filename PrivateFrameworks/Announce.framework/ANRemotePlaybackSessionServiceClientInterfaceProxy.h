
@interface ANRemotePlaybackSessionServiceClientInterfaceProxy : NSObject <ANRemotePlaybackSessionServiceClientInterface> {
    <ANRemotePlaybackSessionServiceClientInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANRemotePlaybackSessionServiceClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2;
- (void)didUpdateAnnouncements:(id)arg1 forGroupID:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
