
@interface ODDIteratorAttributes : NSObject {
    int  mAxis;
    unsigned int  mCount;
    bool  mHideLastTransition;
    int  mPointType;
    int  mStart;
    int  mStep;
}

- (int)axis;
- (unsigned int)count;
- (bool)hideLastTransition;
- (int)pointType;
- (void)setAxis:(int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHideLastTransition:(bool)arg1;
- (void)setPointType:(int)arg1;
- (void)setStart:(int)arg1;
- (void)setStep:(int)arg1;
- (int)start;
- (int)step;

@end
