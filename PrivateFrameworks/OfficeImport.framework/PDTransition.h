
@interface PDTransition : OADProperties {
    NSNumber * duration;
    int  mAdvanceAfterTime;
    bool  mHasAdvanceAfterTime;
    bool  mHasAdvanceOnClick;
    bool  mHasSpeed;
    bool  mHasType;
    bool  mIsAdvanceOnClick;
    PDTransitionOptions * mOptions;
    int  mSpeed;
    int  mType;
}

@property (nonatomic, retain) NSNumber *duration;

- (void).cxx_destruct;
- (int)advanceAfterTime;
- (id)description;
- (id)duration;
- (bool)hasAdvanceAfterTime;
- (bool)hasIsAdvanceOnClick;
- (bool)hasSpeed;
- (bool)hasTransitionOptions;
- (bool)hasType;
- (id)init;
- (bool)isAdvanceOnClick;
- (id)options;
- (void)setAdvanceAfterTime:(int)arg1;
- (void)setDuration:(id)arg1;
- (void)setIsAdvanceOnClick:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setSpeed:(int)arg1;
- (void)setType:(int)arg1;
- (int)speed;
- (int)type;

@end
