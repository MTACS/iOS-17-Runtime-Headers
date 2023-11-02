
@interface MTCoreMaterialVisualStyling : NSObject <MTTinting> {
    CAFilter * _composedFilter;
    NSString * _compositingFilter;
    NSDictionary * _filterProperties;
    NSString * _filterType;
    double  _tintAlpha;
    struct CGColor { } * _tintColor;
    NSDictionary * _tintColorDescription;
    NSString * _tintColorName;
    long long  _tintColorUIStyle;
    NSDictionary * _userInfo;
    NSString * _visualStyleName;
    <MTVisualStyleSetProviding> * _visualStyleSet;
}

@property (getter=_composedFilter, nonatomic, readonly) CAFilter *composedFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tintAlpha;
@property (nonatomic, readonly) struct CGColor { }*tintColor;
@property (nonatomic, readonly, copy) NSDictionary *tintColorDescription;
@property (nonatomic, readonly, copy) NSString *tintColorName;
@property (nonatomic, readonly) long long tintColorUIStyle;
@property (nonatomic, readonly) NSString *visualStyleName;
@property (nonatomic, readonly) NSString *visualStyleSetName;

- (void).cxx_destruct;
- (void)_applyToLayer:(id)arg1 withColorBlock:(id /* block */)arg2;
- (id)_composedFilter;
- (void)_getCompositingFilter:(id*)arg1 tintColor:(struct CGColor {}**)arg2;
- (void)_getFilterType:(id*)arg1 vibrantColor:(struct CGColor {}**)arg2 tintColor:(struct CGColor {}**)arg3 inputReversed:(bool*)arg4;
- (id)_preProcessFilteringDescription:(id)arg1;
- (void)_processBlendingDescription:(id)arg1;
- (void)_processFilteringDescription:(id)arg1;
- (void)_processTintingDescription:(id)arg1;
- (void)_processUserInfoDescription:(id)arg1;
- (id)compositingFilter;
- (void)dealloc;
- (id)description;
- (id)filterProperties;
- (id)filterType;
- (id)initWithVisualStyleSet:(id)arg1 styleName:(id)arg2 description:(id)arg3 andDescendantDescriptions:(id)arg4;
- (double)tintAlpha;
- (struct CGColor { }*)tintColor;
- (id)tintColorDescription;
- (id)tintColorName;
- (long long)tintColorUIStyle;
- (id)userInfo;
- (id)visualStyleName;
- (id)visualStyleSetName;

@end
