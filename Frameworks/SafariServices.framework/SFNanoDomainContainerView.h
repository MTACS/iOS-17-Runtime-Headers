
@interface SFNanoDomainContainerView : UIView {
    _SFBrowserView * _browserView;
    double  _maximumHeight;
    id /* block */  _platterTapAction;
}

@property (nonatomic) _SFBrowserView *browserView;
@property (nonatomic) double maximumHeight;
@property (nonatomic, copy) id /* block */ platterTapAction;

+ (double)defaultHeight;
+ (double)defaultHeightInsideQuickboard;
+ (double)defaultTopOffset;

- (void).cxx_destruct;
- (id)browserView;
- (double)maximumHeight;
- (id /* block */)platterTapAction;
- (void)setBrowserView:(id)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setPlatterTapAction:(id /* block */)arg1;
- (void)updateWithDomain:(id)arg1 isSecure:(bool)arg2 showsNotSecureAnnotation:(bool)arg3;

@end
