
@interface MUPlatterView : UIView {
    UIView * _contentView;
    UIVisualEffectView * _visualEffectView;
    <MUPlatterViewStyleProviding> * _visualStyleProvider;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (id)_createVisualStyleProvider;
- (void)_fetchGroupNameIfNeeded;
- (void)_setup;
- (id)contentView;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;

@end
