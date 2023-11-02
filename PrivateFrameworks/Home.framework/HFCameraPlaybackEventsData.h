
@interface HFCameraPlaybackEventsData : NSObject {
    NSArray * _cameraClips;
    NSArray * _cameraEvents;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSArray *cameraClips;
@property (nonatomic, retain) NSArray *cameraEvents;

- (void).cxx_destruct;
- (id)cameraClips;
- (id)cameraEvents;
- (id)init;
- (void)setCameraClips:(id)arg1;
- (void)setCameraEvents:(id)arg1;
- (void)updateData:(id)arg1 cameraClips:(id)arg2;

@end
