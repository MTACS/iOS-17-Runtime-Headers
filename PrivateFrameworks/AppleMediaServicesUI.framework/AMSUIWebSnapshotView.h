
@interface AMSUIWebSnapshotView : AMSUICommonView {
    long long  _originalInterfaceStyle;
    double  _originalRatio;
    UIView * _snapshot;
    unsigned long long  _visibilityModifiers;
}

@property (nonatomic) long long originalInterfaceStyle;
@property (nonatomic) double originalRatio;
@property (nonatomic, retain) UIView *snapshot;
@property (nonatomic) unsigned long long visibilityModifiers;

+ (id)_imageViewForImage:(id)arg1;
+ (void)_screenCapFromView:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_updateSnapshot:(id)arg1;
- (bool)_visibilityUnmodified;
- (id)initWithView:(id)arg1 completion:(id /* block */)arg2;
- (void)layoutSubviews;
- (long long)originalInterfaceStyle;
- (double)originalRatio;
- (void)setOriginalInterfaceStyle:(long long)arg1;
- (void)setOriginalRatio:(double)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setVisibilityModifiers:(unsigned long long)arg1;
- (id)snapshot;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)visibilityModifiers;

@end
