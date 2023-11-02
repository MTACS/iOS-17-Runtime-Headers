
@interface AXSDKShotDetectorQueueManager : NSObject <AXSDUltronModelAssetManagerDelegate> {
    AXUltronModelAssetManager * _assetManager;
    <AXSDKShotDetectorQueueManagerDelegate> * _delegate;
    NSMutableSet * _detectorQueue;
    bool  _queueGeneralDetector;
    bool  _ready;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSDKShotDetectorQueueManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dequeueListenType:(id)arg1;
- (void)_queueListenType:(id)arg1;
- (void)addGeneralApplianceDetector;
- (void)addListenType:(id)arg1;
- (void)assets:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(bool)arg5;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyForUltronManager:(id)arg1;
- (id)currentDetectionTypes;
- (bool)currentGeneralDetectorIsValid;
- (id)delegate;
- (id)init;
- (bool)prepareToListen;
- (void)removeAllListenTypes;
- (void)removeGeneralApplianceDetector;
- (void)removeListenType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopListening;

@end
