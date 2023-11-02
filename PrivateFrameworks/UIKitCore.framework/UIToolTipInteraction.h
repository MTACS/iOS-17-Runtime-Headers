
@interface UIToolTipInteraction : NSObject <UIInteraction, UIToolTipProvider, _UIVisualStyleStylable> {
    NSString * _defaultToolTip;
    <UIToolTipInteractionDelegate> * _delegate;
    bool  _delegateImplementsToolTipAtPoint;
    bool  _enabled;
    bool  _isDefaultInteraction;
    _UIToolTipInteractionStyle * _style;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultToolTip;
@property (nonatomic) <UIToolTipInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)_defaultToolTipInteractionFromInteractions:(id)arg1;
+ (id)_newDefaultToolTipInteraction;
+ (id)visualStyleRegistryIdentity;

- (void).cxx_destruct;
- (void)_refreshStyle;
- (void)_updateStyleForInteractionProperties;
- (id)defaultToolTip;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (id)initWithDefaultToolTip:(id)arg1;
- (bool)isEnabled;
- (void)setDefaultToolTip:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)toolTipAtPoint:(struct CGPoint { double x1; double x2; })arg1 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
