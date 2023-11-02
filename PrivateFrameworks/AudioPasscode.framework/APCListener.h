
@interface APCListener : NSObject {
    AUPasscodeCodecConfiguration * _codecConfig;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    APCListenerEngine * _listenerEngine;
    APCListenerResultData * _resultData;
    id /* block */  _retrievedDataHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ retrievedDataHandler;

+ (id)capabilityData;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (bool)getResultData:(id*)arg1;
- (id)init;
- (id)initWithCodecConfiguration:(id)arg1;
- (id)initWithConfigurationData:(id)arg1;
- (id /* block */)invalidationHandler;
- (id /* block */)retrievedDataHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRetrievedDataHandler:(id /* block */)arg1;
- (void)startListening;
- (void)startListeningWithError:(id*)arg1;
- (void)stopListening;

@end
