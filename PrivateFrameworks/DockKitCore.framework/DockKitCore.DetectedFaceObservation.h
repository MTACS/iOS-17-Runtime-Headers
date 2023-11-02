
@interface DockKitCore.DetectedFaceObservation : NSObject {
    void _tracked;
    void allocatedLock;
    void confidence;
    void groupId;
    void identifier;
    void modality;
    void observation;
    void time;
}

@property (nonatomic) bool tracked;

- (void).cxx_destruct;
- (id)init;
- (void)setTracked:(bool)arg1;
- (bool)tracked;

@end
