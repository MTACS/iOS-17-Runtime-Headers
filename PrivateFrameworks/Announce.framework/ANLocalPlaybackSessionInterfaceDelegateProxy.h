
@interface ANLocalPlaybackSessionInterfaceDelegateProxy : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate> {
    <ANLocalPlaybackSessionServiceInterfaceDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANLocalPlaybackSessionServiceInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)announcementsStateUpdate:(unsigned long long)arg1;
- (void)announcementsWillStartPlaying:(unsigned long long)arg1;
- (id)delegate;
- (void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
