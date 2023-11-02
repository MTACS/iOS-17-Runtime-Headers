
@interface Sharing.AskToAirDropSenderController : NSObject {
    void airDropClient;
    void didStopHandler;
    void nearbyDeviceCount;
    void nearbyDeviceCountChangedHandler;
    void queue;
}

@property (nonatomic, copy) id /* block */ didStopHandler;
@property (nonatomic) bool hasSeenPrivacyPrompt;
@property (nonatomic) long long nearbyDeviceCount;
@property (nonatomic, copy) id /* block */ nearbyDeviceCountChangedHandler;
@property (nonatomic, readonly) OS_dispatch_queue *queue;

- (void).cxx_destruct;
- (id /* block */)didStopHandler;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)arg1;
- (void)fetchSharingNameWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)hasSeenPrivacyPrompt;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (long long)nearbyDeviceCount;
- (id /* block */)nearbyDeviceCountChangedHandler;
- (id)queue;
- (void)setDidStopHandler:(id /* block */)arg1;
- (void)setHasSeenPrivacyPrompt:(bool)arg1;
- (void)setNearbyDeviceCount:(long long)arg1;
- (void)setNearbyDeviceCountChangedHandler:(id /* block */)arg1;
- (void)start;
- (void)startAs:(id)arg1;
- (void)stop;

@end
