
@interface ADConfidenceLevelRanges : NSObject {
    unsigned long long  _confidenceUnits;
    struct ADFloatRange { 
        float start; 
        float end; 
    }  _highLevel;
    struct ADFloatRange { 
        float start; 
        float end; 
    }  _lowLevel;
    struct ADFloatRange { 
        float start; 
        float end; 
    }  _mediumLevel;
}

@property (nonatomic, readonly) unsigned long long confidenceUnits;
@property (nonatomic) struct ADFloatRange { float x1; float x2; } highLevel;
@property (nonatomic) struct ADFloatRange { float x1; float x2; } lowLevel;
@property (nonatomic) struct ADFloatRange { float x1; float x2; } mediumLevel;

+ (id)rangesForUnits:(unsigned long long)arg1 lowLevel:(struct ADFloatRange { float x1; float x2; })arg2 mediumLevel:(struct ADFloatRange { float x1; float x2; })arg3 highLevel:(struct ADFloatRange { float x1; float x2; })arg4;

- (unsigned long long)confidenceUnits;
- (id)createConvertedRangesWithUnits:(unsigned long long)arg1 operation:(int (*)arg2;
- (struct ADFloatRange { float x1; float x2; })highLevel;
- (id)initForUnits:(unsigned long long)arg1 lowLevel:(struct ADFloatRange { float x1; float x2; })arg2 mediumLevel:(struct ADFloatRange { float x1; float x2; })arg3 highLevel:(struct ADFloatRange { float x1; float x2; })arg4;
- (struct ADFloatRange { float x1; float x2; })lowLevel;
- (struct ADFloatRange { float x1; float x2; })mediumLevel;
- (id)rangesForUnits:(unsigned long long)arg1;
- (void)setHighLevel:(struct ADFloatRange { float x1; float x2; })arg1;
- (void)setLowLevel:(struct ADFloatRange { float x1; float x2; })arg1;
- (void)setMediumLevel:(struct ADFloatRange { float x1; float x2; })arg1;

@end
