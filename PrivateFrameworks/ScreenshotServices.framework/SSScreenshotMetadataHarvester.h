
@interface SSScreenshotMetadataHarvester : NSObject

+ (id)_applicationScreenshotServiceWithPrivateDelegate:(bool)arg1;
+ (id)_contentRectsForMetadata;
+ (void)_crawlView:(id)arg1 executingBlock:(id /* block */)arg2;
+ (void)_crawlViewController:(id)arg1 executingBlock:(id /* block */)arg2;
+ (void)_grabPDFRepresentationForIdentifier:(id)arg1 withCallback:(id /* block */)arg2;
+ (void)_grabUserActivityTitleWithCallback:(id /* block */)arg1;
+ (id)_screenshotServiceForWindowScene:(id)arg1 wantsPrivateDelegate:(bool)arg2;
+ (id)_screenshotServicesDelegateWithIdentifier:(id)arg1;
+ (bool)canGenerateDocumentForIdentifier:(id)arg1;
+ (void)harvestScreenshotMetadataAndRespondToAction:(id)arg1;
+ (id)screenshotServiceWithIdentifier:(id)arg1;
+ (void)sendResponseForAction:(id)arg1 withObject:(id)arg2 forKey:(unsigned long long)arg3;

@end
