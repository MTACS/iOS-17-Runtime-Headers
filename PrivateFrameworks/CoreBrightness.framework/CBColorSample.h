
@interface CBColorSample : NSObject {
    double  _CCT;
    struct { 
        double X; 
        double Y; 
        double Z; 
    }  _XYZ;
    double  _lux;
    unsigned long long  _mode;
    unsigned long long  _type;
    struct { 
        double x; 
        double y; 
    }  _xy;
}

@property (nonatomic, readonly) double CCT;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } Lab;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } XYZ;
@property (nonatomic, readonly) long long colorBin;
@property (nonatomic, readonly) double lux;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) struct { double x1; double x2; } xy;

- (double)CCT;
- (double)CCTDifferenceWith:(id)arg1;
- (struct { double x1; double x2; double x3; })Lab;
- (double)LuxDifferenceWith:(id)arg1;
- (struct { double x1; double x2; double x3; })XYZ;
- (long long)colorBin;
- (double)colorDeltaEWith:(id)arg1;
- (id)copyDataInDictionary;
- (id)description;
- (void)fillInChromaticity;
- (void)fillInTristimulus;
- (id)init;
- (id)initWithChromaticity:(struct { double x1; double x2; })arg1 illuminance:(double)arg2 andTempterature:(double)arg3;
- (id)initWithHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)initWithTristimulus:(struct { double x1; double x2; double x3; })arg1 illuminance:(double)arg2 andTempterature:(double)arg3;
- (double)lux;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setXYZ:(struct { double x1; double x2; double x3; })arg1;
- (void)setXy:(struct { double x1; double x2; })arg1;
- (unsigned long long)type;
- (struct { double x1; double x2; })xy;

@end
