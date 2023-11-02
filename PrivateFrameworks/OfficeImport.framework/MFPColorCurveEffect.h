
@interface MFPColorCurveEffect : MFPEffect {
    int  mAdjustValue;
    int  mAdjustment;
    int  mChannel;
}

+ (id)GUID;

- (id)initWithAdjustment:(int)arg1 channel:(int)arg2 adjustValue:(int)arg3;

@end
