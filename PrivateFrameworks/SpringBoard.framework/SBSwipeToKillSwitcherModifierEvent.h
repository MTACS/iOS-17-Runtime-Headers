
@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    double  _decelerationTargetProgress;
    bool  _dragging;
    long long  _layoutRole;
    double  _progress;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic) double decelerationTargetProgress;
@property (getter=isDragging, nonatomic) bool dragging;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic) double progress;
@property (nonatomic) struct CGPoint { double x1; double x2; } translation;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decelerationTargetProgress;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 progress:(double)arg3 translation:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isDragging;
- (long long)layoutRole;
- (double)progress;
- (void)setDecelerationTargetProgress:(double)arg1;
- (void)setDragging:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translation;
- (long long)type;

@end
