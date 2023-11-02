
@interface REBluetoothDeviceRelevanceProviderManager : RERelevanceProviderManager <REBluetoothDeviceRelevanceProviderManagerProperties, REPredictorObserver> {
    bool  _connectedToCar;
    bool  _connectedToSpeaker;
}

@property (nonatomic, readonly) bool connectedToCar;
@property (nonatomic, readonly) bool connectedToSpeaker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (bool)connectedToCar;
- (bool)connectedToSpeaker;
- (id)initWithQueue:(id)arg1;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)resume;

@end
