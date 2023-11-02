
@interface _DBSuspendAppToHomeZoomAnimation : DBAppToHomeAnimation {
    DBIconView * _iconView;
}

@property (nonatomic, retain) DBIconView *iconView;

- (void).cxx_destruct;
- (id)iconView;
- (id)initWithSettings:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)startAnimationWithCompletion:(id /* block */)arg1;

@end
