
@interface PDAnimateRotateBehavior : PDAnimateBehavior {
    double  mBy;
    double  mFrom;
    bool  mHasBy;
    bool  mHasFrom;
    bool  mHasTo;
    double  mTo;
}

- (double)by;
- (double)from;
- (bool)hasBy;
- (bool)hasFrom;
- (bool)hasTo;
- (id)init;
- (void)setBy:(double)arg1;
- (void)setFrom:(double)arg1;
- (void)setTo:(double)arg1;
- (double)to;

@end
