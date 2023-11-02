
@interface FigCaptureLogSmartCameraGating : NSObject {
    NSSet * _currentPresentations;
    int  _gateIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _numBoxesPresented;
    int  _numClosingFrames;
    int  _numEmptyFrames;
    int  _numFrames;
    int  _numTrackedRegions;
    NSDate * _openingTimestamp;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithGateIdentifier:(int)arg1;
- (void)logGateClosed;
- (void)logGateOpened;
- (void)logSmartCamIsConfident:(bool)arg1 presentedIdentifiers:(id)arg2 presentedCount:(int)arg3;
- (void)logTracksCreated:(int)arg1;

@end
