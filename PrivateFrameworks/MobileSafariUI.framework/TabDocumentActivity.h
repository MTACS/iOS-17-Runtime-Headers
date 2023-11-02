
@interface TabDocumentActivity : _SFActivity {
    TabDocument * _tabDocument;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) bool canPerformOnNewTabPage;
@property (nonatomic, readonly) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_embeddedActivityViewController;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (id)_systemImageName;
- (long long)actionType;
- (long long)actionTypeWithTabDocument:(id)arg1;
- (id)activityImageWithTabDocument:(id)arg1;
- (id)activityTitle;
- (id)activityTitleWithTabDocument:(id)arg1;
- (bool)canPerformOnNewTabPage;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)canPerformWithTabDocument:(id)arg1;
- (id)embeddedActivityViewControllerWithTabDocument:(id)arg1;
- (void)performActivity;
- (void)performActivityWithTabDocument:(id)arg1;
- (void)prepareWithTabDocument:(id)arg1;
- (void)prepareWithTabDocument:(id)arg1 completion:(id /* block */)arg2;
- (id)systemImageNameWithTabDocument:(id)arg1;
- (id)tabDocument;

@end
