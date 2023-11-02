
@interface PXStoryPacingManualTimeSource : NSObject <PXStoryPacingTimeSource> {
    bool  _active;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    <PXStoryPacingTimeSourceDelegate> * _delegate;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXStoryPacingTimeSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRealTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)delegate;
- (void)incrementByTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (bool)isActive;
- (bool)isRealTime;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
