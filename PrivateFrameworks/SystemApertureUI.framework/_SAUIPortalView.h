
@interface _SAUIPortalView : UIView {
    UIView * _sourceView;
}

@property (nonatomic, retain) UIView *sourceView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_configurePortalViewIfNeeded;
- (void)didMoveToWindow;
- (id)portalLayer;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
