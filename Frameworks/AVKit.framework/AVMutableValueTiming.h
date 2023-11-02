
@interface AVMutableValueTiming : AVValueTiming

@property (nonatomic) double anchorTimeStamp;
@property (nonatomic) double anchorValue;
@property (nonatomic) double rate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (Class)classForCoder;
- (void)setAnchorTimeStamp:(double)arg1;
- (void)setAnchorValue:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setValueTiming:(id)arg1;

@end
