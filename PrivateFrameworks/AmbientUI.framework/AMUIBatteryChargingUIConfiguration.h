
@interface AMUIBatteryChargingUIConfiguration : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _boltSize;
    double  _chargingTextFontSize;
    double  _lineWidth;
    double  _ringDiameter;
    bool  _staticViewNeeded;
}

@property (nonatomic) struct CGSize { double x1; double x2; } boltSize;
@property (nonatomic, readonly) double chargingTextFontSize;
@property (nonatomic) double lineWidth;
@property (nonatomic) double ringDiameter;
@property (nonatomic, readonly) bool staticViewNeeded;

+ (id)defaultConfiguration;

- (struct CGSize { double x1; double x2; })boltSize;
- (double)chargingTextFontSize;
- (id)initWithRingDiameter:(double)arg1 lineWidth:(double)arg2 boltSize:(struct CGSize { double x1; double x2; })arg3 chargingTextFontSize:(double)arg4;
- (double)lineWidth;
- (double)ringDiameter;
- (void)setBoltSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setRingDiameter:(double)arg1;
- (bool)staticViewNeeded;

@end
