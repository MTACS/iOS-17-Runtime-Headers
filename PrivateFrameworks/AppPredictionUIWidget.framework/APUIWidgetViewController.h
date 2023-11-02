
@interface APUIWidgetViewController : UIViewController {
    bool  _effectiveViewVisibility;
    NSString * _identifier;
    ATXSuggestionLayout * _layout;
    bool  _stackVisible;
    ATXHomeScreenSuggestionClient * _suggestionClient;
    NSArray * _suggestionIds;
    bool  _viewVisible;
    ATXHomeScreenWidgetIdentifiable * _widgetIdentifiable;
}

@property (nonatomic) bool effectiveViewVisibility;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCurrentlyVisible;
@property (nonatomic, retain) ATXSuggestionLayout *layout;
@property (nonatomic) bool stackVisible;
@property (nonatomic, retain) ATXHomeScreenSuggestionClient *suggestionClient;
@property (nonatomic, retain) NSArray *suggestionIds;
@property (getter=isViewVisible, nonatomic) bool viewVisible;
@property (nonatomic, retain) ATXHomeScreenWidgetIdentifiable *widgetIdentifiable;

+ (id)imageForIconSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (id)smartStackImageForIconSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

- (void).cxx_destruct;
- (void)_topWidgetDidAppear:(id)arg1;
- (void)_topWidgetDidDisappear:(id)arg1;
- (void)_updateViewVisibility;
- (void)dealloc;
- (bool)effectiveViewVisibility;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isCurrentlyVisible;
- (bool)isViewVisible;
- (id)layout;
- (void)logChangeWithNewSuggestionIds:(id)arg1 previousSuggestionIds:(id)arg2 suggestionClient:(id)arg3;
- (bool)matchesWidgetUniqueID:(id)arg1 stackID:(id)arg2;
- (void)setEffectiveViewVisibility:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setStackVisible:(bool)arg1;
- (void)setSuggestionClient:(id)arg1;
- (void)setSuggestionIds:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (void)setWidgetIdentifiable:(id)arg1;
- (bool)stackVisible;
- (id)suggestionClient;
- (id)suggestionIds;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)widgetIdentifiable;

@end
