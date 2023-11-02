
@interface SBHClockHandsImageSet : NSObject {
    UIImage * _hourMinuteDot;
    UIImage * _hours;
    struct SBHClockApplicationIconImageMetrics { 
        double secondsHandWidth; 
        double secondsHandLength; 
        double secondsHandleLength; 
        double secondsHandRingDiameter; 
        double secondsHandRingKnockoutDiameter; 
        struct CGSize { 
            double width; 
            double height; 
        } secondsHandBounds; 
        double minutesHandWidth; 
        double minutesHandLength; 
        double minutesHandRingDiameter; 
        double minutesHandRingKnockoutDiameter; 
        struct CGSize { 
            double width; 
            double height; 
        } minutesHandBounds; 
        double shadowRadius; 
        double shadowInset; 
        double hoursHandWidth; 
        double hoursHandLength; 
        struct CGSize { 
            double width; 
            double height; 
        } hoursHandBounds; 
        double separatorWidth; 
        double separatorLength; 
        double separatorExtraLength; 
        double faceRadius; 
        double numberPointSize; 
        double contentsScale; 
        struct SBIconImageInfo { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            double scale; 
            double continuousCornerRadius; 
        } iconImageInfo; 
    }  _metrics;
    UIImage * _minutes;
    UIImage * _secondDot;
    UIImage * _seconds;
}

@property (nonatomic, retain) UIImage *hourMinuteDot;
@property (nonatomic, retain) UIImage *hours;
@property (nonatomic, retain) UIImage *minutes;
@property (nonatomic, retain) UIImage *secondDot;
@property (nonatomic, retain) UIImage *seconds;

- (void).cxx_destruct;
- (void)getMetrics:(out struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
- (id)hourMinuteDot;
- (id)hours;
- (id)minutes;
- (id)secondDot;
- (id)seconds;
- (void)setHourMinuteDot:(id)arg1;
- (void)setHours:(id)arg1;
- (void)setMetrics:(const in struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
- (void)setMinutes:(id)arg1;
- (void)setSecondDot:(id)arg1;
- (void)setSeconds:(id)arg1;

@end
