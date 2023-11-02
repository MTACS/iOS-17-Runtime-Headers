
@interface SBIconListViewAppDragContext : NSObject {
    bool  _hasPaused;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pausePoint;
    NSTimer * _pauseTimer;
}

@property (nonatomic) bool hasPaused;
@property (nonatomic) struct CGPoint { double x1; double x2; } pausePoint;
@property (nonatomic, retain) NSTimer *pauseTimer;

- (void).cxx_destruct;
- (bool)hasPaused;
- (struct CGPoint { double x1; double x2; })pausePoint;
- (id)pauseTimer;
- (void)setHasPaused:(bool)arg1;
- (void)setPausePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPauseTimer:(id)arg1;

@end
