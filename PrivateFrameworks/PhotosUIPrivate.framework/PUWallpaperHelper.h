
@interface PUWallpaperHelper : NSObject

+ (id)deleteSuggestionAction:(id)arg1;
+ (id)fileRadarActionForComponent:(long long)arg1 title:(id)arg2 suggestion:(id)arg3 asset:(id)arg4 actionBeingHandler:(id /* block */)arg5 actionEndHandler:(id /* block */)arg6;
+ (id)fileRadarSubmenuForSuggestion:(id)arg1 asset:(id)arg2 actionBeingHandler:(id /* block */)arg3 actionEndHandler:(id /* block */)arg4;
+ (id)presentPosterEditorWithAsset:(id)arg1 fromViewController:(id)arg2;
+ (id)rejectSuggestionAction:(id)arg1;

@end
