
@interface PXStoryPacingAutoIncrementingTimeSource : NSObject <PXStoryPacingTimeSource> {
    bool  _active;
    <PXStoryPacingTimeSourceDelegate> * _delegate;
    <PXStoryPacingClock> * _pacingClock;
    PXDisplayLink * _playLink;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXStoryPacingTimeSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRealTime;
@property (nonatomic) <PXStoryPacingClock> *pacingClock;
@property (nonatomic, retain) PXDisplayLink *playLink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePlayLink:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)delegate;
- (bool)isActive;
- (bool)isRealTime;
- (id)pacingClock;
- (id)playLink;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPacingClock:(id)arg1;
- (void)setPlayLink:(id)arg1;

@end
