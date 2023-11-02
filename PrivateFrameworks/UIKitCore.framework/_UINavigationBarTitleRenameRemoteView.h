
@interface _UINavigationBarTitleRenameRemoteView : UIView <_UINavigationBarTitleRenamerContentView> {
    struct { 
        unsigned int needsMetricsUpdate : 1; 
    }  _flags;
    double  _horizontalTextInset;
    id /* block */  _horizontalTextInsetDidChangeCallback;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    _UIPortalView * _portalView;
    _UINavigationBarTitleRenamerRemoteSession * _session;
    long long  _textAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalTextInset;
@property (nonatomic, copy) id /* block */ horizontalTextInsetDidChangeCallback;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic, readonly) _UINavigationBarTitleRenamerRemoteSession *session;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (void)_connect;
- (void)_disconnect;
- (double)horizontalTextInset;
- (id /* block */)horizontalTextInsetDidChangeCallback;
- (id)initWithSession:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)portalView;
- (id)session;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalTextInset:(double)arg1;
- (void)setHorizontalTextInsetDidChangeCallback:(id /* block */)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsMetricsUpdate;
- (void)setPortalView:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;
- (void)updateMetrics;
- (void)updateMetricsIfNeeded;
- (void)willMoveToWindow:(id)arg1;

@end
