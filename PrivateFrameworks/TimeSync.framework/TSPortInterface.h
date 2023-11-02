
@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient> {
    int (* _macLookupTimeoutCallback;
    void * _macLookupTimeoutRefcon;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    TSgPTPPort * _port;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSgPTPPort *port;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didTimeoutOnMACLookupForPort:(id)arg1;
- (id)initWithgPTPPort:(id)arg1 onClockIdentifier:(unsigned long long)arg2;
- (id)port;
- (void)setMACLookupTimeoutCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setPort:(id)arg1;

@end
