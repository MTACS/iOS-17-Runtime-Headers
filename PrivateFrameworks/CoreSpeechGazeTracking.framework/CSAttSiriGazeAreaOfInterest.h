
@interface CSAttSiriGazeAreaOfInterest : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _activeRegion;
    unsigned long long  _gazeState;
    CSAttSiriGazeTrackingTimedPulses * _pulses;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeRegion;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeRegionWithPadding;
@property (nonatomic, readonly) unsigned long long gazeState;

- (void).cxx_destruct;
- (bool)_hadGazeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (bool)_mouthOpeningsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_reset;
- (void)_setLabel:(id)arg1;
- (void)_updateState:(unsigned long long)arg1 withTimestamp:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRegionWithPadding;
- (id)descriptionRect;
- (unsigned long long)gazeState;
- (id)initWithActiveRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActiveRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
