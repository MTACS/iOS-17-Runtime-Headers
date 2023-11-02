
@interface _UIFluidSliderInteractionConfiguration : NSObject <NSCopying> {
    NSArray * _customDrivers;
    unsigned long long  _preferredInputMethods;
    double  _stretchAmount;
    struct CGSize { 
        double width; 
        double height; 
    }  _trackSize;
}

@property (setter=_setCustomDrivers:, nonatomic, retain) NSArray *_customDrivers;
@property (nonatomic) unsigned long long preferredInputMethods;
@property (nonatomic) double stretchAmount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } trackSize;

+ (id)configurationWithTrackSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)_customDrivers;
- (void)_setCustomDrivers:(id)arg1;
- (id)copyWithTrackSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (unsigned long long)preferredInputMethods;
- (void)setPreferredInputMethods:(unsigned long long)arg1;
- (void)setStretchAmount:(double)arg1;
- (double)stretchAmount;
- (struct CGSize { double x1; double x2; })trackSize;

@end
