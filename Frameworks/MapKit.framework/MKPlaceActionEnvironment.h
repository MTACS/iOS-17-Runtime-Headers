
@interface MKPlaceActionEnvironment : NSObject {
    GEOAPPlaceCardModule * _analyticsModuleMetadata;
    bool  _isQuickAction;
    UIView * _sourceView;
}

@property (nonatomic, retain) GEOAPPlaceCardModule *analyticsModuleMetadata;
@property (nonatomic) bool isQuickAction;
@property (nonatomic, retain) UIView *sourceView;

- (void).cxx_destruct;
- (id)analyticsModuleMetadata;
- (id)initWithOptions:(id)arg1;
- (bool)isQuickAction;
- (void)setAnalyticsModuleMetadata:(id)arg1;
- (void)setIsQuickAction:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
