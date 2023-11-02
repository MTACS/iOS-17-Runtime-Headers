
@interface APOdmlStoreServerContainer : APOdmlSingleton {
    bool  _isListening;
    NSError * _listeningError;
    APOdmlUnfairLock * _listeningLock;
    NSURL * _modelURL;
    NSXPCStoreServer * _storeServer;
}

@property (nonatomic) bool isListening;
@property (nonatomic, retain) NSError *listeningError;
@property (nonatomic, readonly) APOdmlUnfairLock *listeningLock;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, retain) NSXPCStoreServer *storeServer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startListening:(id /* block */)arg1;
- (id)init;
- (bool)isListening;
- (id)listeningError;
- (id)listeningLock;
- (id)modelURL;
- (void)setIsListening:(bool)arg1;
- (void)setListeningError:(id)arg1;
- (void)setStoreServer:(id)arg1;
- (void)startListening;
- (id)storeServer;
- (id)storeServerForModelURL:(id)arg1;

@end
