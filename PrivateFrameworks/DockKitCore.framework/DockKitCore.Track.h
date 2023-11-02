
@interface DockKitCore.Track : NSObject {
    void _bodyBox;
    void _faceBox;
    void _faceID;
    void _facePitch;
    void _faceYaw;
    void _id;
    void _timeSinceLastSeen;
    void _trackedSubjectState;
    void _type;
    void _weightHorizontal;
    void _weightVertical;
    void allocatedLock;
}

- (void).cxx_destruct;
- (id)init;

@end
