
@interface NCNotificationListStackBackgroundDimmingView : UIView <NCNotificationListDimmable> {
    double  _absoluteStackingBrightnessFilterInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateDimming;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setBackgroundColor:(id)arg1;

@end
