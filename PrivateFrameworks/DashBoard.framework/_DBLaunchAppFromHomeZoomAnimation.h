
@interface _DBLaunchAppFromHomeZoomAnimation : DBHomeToAppAnimation {
    DBIconView * _iconView;
}

@property (nonatomic, readonly) DBIconView *iconView;

- (void).cxx_destruct;
- (id)iconView;
- (id)initWithSettings:(id)arg1;
- (void)startAnimationWithCompletion:(id /* block */)arg1;

@end
