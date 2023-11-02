
@interface _UIFloatableBarButtonItem : UIBarButtonItem {
    UIView * _configuredFloatableView;
    bool  _floatable;
    bool  _floating;
    UIView * _referenceView;
}

@property (setter=_setConfiguredFloatableView:, nonatomic, retain) UIView *_configuredFloatableView;
@property (getter=_isFloatable, setter=_setFloatable:, nonatomic) bool _floatable;
@property (getter=_isFloating, setter=_setFloating:, nonatomic) bool _floating;
@property (setter=_setReferenceView:, nonatomic, retain) UIView *_referenceView;

- (void).cxx_destruct;
- (id)_configuredFloatableView;
- (bool)_isFloatable;
- (bool)_isFloating;
- (id)_referenceView;
- (void)_setConfiguredFloatableView:(id)arg1;
- (void)_setFloatable:(bool)arg1;
- (void)_setFloating:(bool)arg1;
- (void)_setReferenceView:(id)arg1;
- (id)description;

@end
