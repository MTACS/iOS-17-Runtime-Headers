
@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString * mBy;
    int  mCalcMode;
    NSString * mFrom;
    bool  mHasCalcMode;
    bool  mHasValueType;
    NSString * mTo;
    int  mValueType;
}

- (void).cxx_destruct;
- (id)by;
- (int)calcMode;
- (id)from;
- (bool)hasCalcMode;
- (bool)hasValueType;
- (id)init;
- (void)setBy:(id)arg1;
- (void)setCalcMode:(int)arg1;
- (void)setFrom:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)to;
- (int)valueType;

@end
