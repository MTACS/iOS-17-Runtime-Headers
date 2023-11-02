
@interface CORapportBrowser : NSObject <COBrowserProtocol> {
    bool  _activated;
    <COCompanionLinkClientFactoryProtocol> * _companionLinkClientFactory;
    <COCompanionLinkClientProtocol> * _listener;
    unsigned short  _listeningPort;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COBrowserObserverSet * _observerSet;
    CORapportTransport * _sourceTransport;
    id /* block */  _startCallback;
    bool  _started;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) <COCompanionLinkClientFactoryProtocol> *companionLinkClientFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <COCompanionLinkClientProtocol> *listener;
@property (nonatomic, readonly) unsigned short listeningPort;
@property (nonatomic, readonly) COBrowserObserverSet *observerSet;
@property (nonatomic) CORapportTransport *sourceTransport;
@property (nonatomic, copy) id /* block */ startCallback;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_onqueue_handleActivation:(id)arg1;
- (void)_onqueue_handleFoundDevice:(id)arg1;
- (void)_onqueue_handleLostDevice:(id)arg1;
- (void)_onqueue_informObserversOfDiscoveredRecord:(id)arg1;
- (void)_onqueue_informObserversOfLostRecord:(id)arg1;
- (void)_onqueue_updateListeningPort:(id)arg1;
- (id)_rapportDeviceWithCompanionLinkDevice:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)addObserverUsingBlock:(id /* block */)arg1;
- (id)companionLinkClientFactory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)listener;
- (unsigned short)listeningPort;
- (id)observerSet;
- (id)registeredObservers;
- (void)removeObserver:(id)arg1;
- (void)setCompanionLinkClientFactory:(id)arg1;
- (void)setSourceTransport:(id)arg1;
- (void)setStartCallback:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)sourceTransport;
- (id /* block */)startCallback;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (id)workQueue;

@end
