
@interface VCCannedAVSync : NSObject {
    double  _base;
    double  _modulo;
}

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (id)sharedCannedAVSync;

- (void)addStreamWithCount:(int)arg1 rate:(double)arg2;
- (double)base;
- (void)clear;
- (id)init;
- (double)modulo;
- (void)setBase:(double)arg1;
- (void)setModulo:(double)arg1;

@end
