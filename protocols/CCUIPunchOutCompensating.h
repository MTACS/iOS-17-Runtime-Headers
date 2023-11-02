
@protocol CCUIPunchOutCompensating <NSObject>

@required

- (double)ccui_compensationAlpha;
- (id)ccui_punchOutCompensatingCopy;
- (void)ccui_setCompensationAlpha:(double)arg1;
- (void)ccui_updatePunchOutCompensationIfNecessary;

@end
