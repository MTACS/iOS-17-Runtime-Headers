
@interface HUControlHostView : UIView {
    NSArray * _controlConstraints;
    UIView * _controlView;
    bool  _requiresWellDefinedSize;
}

@property (nonatomic, retain) NSArray *controlConstraints;
@property (nonatomic, retain) UIView *controlView;
@property (nonatomic) bool requiresWellDefinedSize;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)controlConstraints;
- (id)controlView;
- (id)initWithControlView:(id)arg1;
- (bool)requiresWellDefinedSize;
- (void)setControlConstraints:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setRequiresWellDefinedSize:(bool)arg1;
- (void)updateConstraints;

@end
