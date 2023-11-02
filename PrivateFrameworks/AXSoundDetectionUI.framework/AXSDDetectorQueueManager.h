
@interface AXSDDetectorQueueManager : NSObject <AXSDDetectorStoreDelegate> {
    <AXSDDetectorQueueManagerDelegate> * _delegate;
    NSMutableSet * _detectorQueue;
    bool  _ready;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSDDetectorQueueManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *detectorQueue;
@property (readonly) unsigned long long hash;
@property bool ready;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dequeueListenType:(id)arg1;
- (void)_queueListenType:(id)arg1;
- (void)addDetector:(id)arg1;
- (void)addListenType:(id)arg1;
- (id)currentDetectionTypes;
- (id)delegate;
- (id)detectorQueue;
- (void)detectorStore:(id)arg1 detectorsNeedUpdate:(id)arg2 toDetectors:(id)arg3;
- (void)detectorsReadyForDetectorStore:(id)arg1;
- (id)init;
- (bool)prepareToListen;
- (bool)ready;
- (void)removeAllListenTypes;
- (void)removeDetector:(id)arg1;
- (void)removeListenType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetectorQueue:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)stopListening;

@end
