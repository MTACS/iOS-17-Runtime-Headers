
@interface PKInkFeatheringDescriptor : NSObject {
    double  _endCapDistance;
    double  _endCapFade;
    double  _endCapShrink;
    double  _endCapTime;
    double  _startCapDistance;
    double  _startCapFade;
    double  _startCapShrink;
    double  _startCapTime;
}

@property (nonatomic) double endCapDistance;
@property (nonatomic) double endCapFade;
@property (nonatomic) double endCapShrink;
@property (nonatomic) double endCapTime;
@property (nonatomic) double startCapDistance;
@property (nonatomic) double startCapFade;
@property (nonatomic) double startCapShrink;
@property (nonatomic) double startCapTime;

+ (id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4;

- (double)endCapDistance;
- (double)endCapFade;
- (double)endCapShrink;
- (double)endCapTime;
- (id)initWithStartCapTime:(double)arg1 startCapDistance:(double)arg2 startCapFade:(double)arg3 startCapShrink:(double)arg4 endCapTime:(double)arg5 endCapDistance:(double)arg6 endCapFade:(double)arg7 endCapShrink:(double)arg8;
- (id)mutableCopy;
- (void)setEndCapDistance:(double)arg1;
- (void)setEndCapFade:(double)arg1;
- (void)setEndCapShrink:(double)arg1;
- (void)setEndCapTime:(double)arg1;
- (void)setStartCapDistance:(double)arg1;
- (void)setStartCapFade:(double)arg1;
- (void)setStartCapShrink:(double)arg1;
- (void)setStartCapTime:(double)arg1;
- (double)startCapDistance;
- (double)startCapFade;
- (double)startCapShrink;
- (double)startCapTime;

@end
