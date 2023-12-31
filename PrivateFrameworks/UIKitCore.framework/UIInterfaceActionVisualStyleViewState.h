
@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying> {
    UIScreen * _screen;
    UIColor * _tintColor;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)_collectStateFromScreen:(id)arg1;
- (void)_collectStateFromView:(id)arg1;
- (void)_collectStateFromVisualStyleViewState:(id)arg1;
- (bool)_stateEqualToVisualStyleViewState:(id)arg1;
- (id)copyWithScreen:(id)arg1;
- (id)copyWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithPropertiesFromTopLevelView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)screen;
- (id)tintColor;
- (id)traitCollection;

@end
