
@interface AXStyleProviderUIAlert : AXUIAlert {
    unsigned long long  _alertType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _backgroundViewDismissalOrigin;
    double  _dismissalGestureYOffset;
    <AXUIAlertStyleProvider> * _styleProvider;
}

@property (nonatomic) unsigned long long alertType;
@property (nonatomic, retain) <AXUIAlertStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7;
- (void)_cancelDismissalWithPanGesture:(id)arg1;
- (void)_endDismissalWithPanGesture:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateDismissalWithPanGesture:(id)arg1;
- (void)_updateViewForDismissalPercentage:(double)arg1;
- (void)addToContainerView:(id)arg1;
- (unsigned long long)alertType;
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6;
- (void)setAlertType:(unsigned long long)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
