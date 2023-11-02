
@interface DockKitCore.TrackedFaceObservation : NSObject {
    void confidence;
    void framesSinceLastUpdate;
    void framesToRecognitionFailure;
    void framesToRecognitionSuccess;
    void groupId;
    void identifier;
    void maxFramesSinceLastUpdate;
    void modality;
    void numUpdates;
    void observation;
    void recognized;
    void semaphore;
    void sequenceRequestHandler;
    void trackerId;
    void trackingRequest;
}

- (void).cxx_destruct;
- (id)init;

@end
