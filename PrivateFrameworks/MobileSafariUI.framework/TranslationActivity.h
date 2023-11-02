
@interface TranslationActivity : TabDocumentActivity

@property (nonatomic, readonly) WBSTranslationContext *translationContext;

+ (id)allTranslationActivities;

- (id)_systemImageName;
- (id)activityTitleWithTabDocument:(id)arg1;
- (id)activityTitleWithTranslationContext:(id)arg1;
- (id)activityType;
- (bool)canPerformWithTabDocument:(id)arg1;
- (bool)canPerformWithTranslationContext:(id)arg1;
- (void)performActivityWithTabDocument:(id)arg1;
- (void)performActivityWithTranslationContext:(id)arg1;
- (void)prepareWithTabDocument:(id)arg1;
- (void)prepareWithTranslationContext:(id)arg1;
- (id)translationContext;

@end
