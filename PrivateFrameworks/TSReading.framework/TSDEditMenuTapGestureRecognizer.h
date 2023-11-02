
@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer {
    bool  mIgnoreTargetAction;
    TSDRep * mTouchedRep;
}

@property (nonatomic) bool ignoreTargetAction;

- (bool)ignoreTargetAction;
- (void)reset;
- (void)setIgnoreTargetAction:(bool)arg1;
- (id)touchedRep;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
