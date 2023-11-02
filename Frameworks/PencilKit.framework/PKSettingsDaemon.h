
@interface PKSettingsDaemon : NSObject

+ (void)_dispatchWithErrorHandler:(id /* block */)arg1 successHandler:(id /* block */)arg2;
+ (id)daemonQueue;
+ (void)openPencilPreferences;
+ (bool)prefersPencilHoverPreviewEnabled;
+ (void)prewarmServiceConnectionIfNeeded;
+ (void)setCurrentScribbleLanguageIdentifiers:(id)arg1;
+ (void)setPrefersPencilHoverPreviewEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
+ (void)setPrefersPencilOnlyDrawing:(bool)arg1;

@end
