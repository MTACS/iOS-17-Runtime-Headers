
@interface CAMSemanticStyleSettingsRootController : UIViewController <CAMSemanticStyleSettingsViewDelegate> {
    CAMSemanticStyleSettingsView * __settingsView;
    id /* block */  _completionBlock;
}

@property (nonatomic, readonly) CAMSemanticStyleSettingsView *_settingsView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dismiss;
- (id)_settingsView;
- (id /* block */)completionBlock;
- (void)loadView;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)settingsViewDidDismiss:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
