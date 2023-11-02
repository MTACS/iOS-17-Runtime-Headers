
@interface CAMGridView : UIView <CAMLevelViewModelChangeObserver, CEKAdditiveAnimatorDelegate> {
    CEKAdditiveAnimator * __animator;
    CAMLevelViewModel * _levelViewModel;
}

@property (nonatomic, retain) CEKAdditiveAnimator *_animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMLevelViewModel *levelViewModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animator;
- (void)_drawLinesWithInset:(float)arg1;
- (void)_getDeltasBetweenLines:(out double*)arg1 widthDelta:(out double*)arg2;
- (void)_setAnimatorGridOffsetForViewModel:(id)arg1 animated:(bool)arg2;
- (void)animator:(id)arg1 didUpdateValuesForKeys:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)levelViewModel;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;
- (void)setLevelViewModel:(id)arg1;
- (void)set_animator:(id)arg1;

@end
