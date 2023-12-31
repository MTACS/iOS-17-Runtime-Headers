
@interface IKStyleList : NSObject {
    IKStyleList * _baseStyleList;
    NSString * _classSelector;
    bool  _requiresMediaQueryEvaluation;
    bool  _resolutionDone;
    IKViewElementStyle * _resolvedStyle;
    NSArray * _styles;
}

@property (nonatomic, readonly, retain) IKStyleList *baseStyleList;
@property (nonatomic, readonly, copy) NSString *classSelector;
@property (nonatomic, readonly) bool requiresMediaQueryEvaluation;
@property (getter=isResolutionDone, nonatomic) bool resolutionDone;
@property (nonatomic, retain) IKViewElementStyle *resolvedStyle;
@property (nonatomic, readonly, copy) NSArray *styles;

- (void).cxx_destruct;
- (void)_resolveWithMediaQueryEvaluator:(id)arg1;
- (id)baseStyleList;
- (id)classSelector;
- (id)initWithClassSelector:(id)arg1 styles:(id)arg2 baseStyleList:(id)arg3;
- (bool)isResolutionDone;
- (bool)requiresMediaQueryEvaluation;
- (id)resolvedStyle;
- (id)resolvedStyleWithMediaQueryEvaluator:(id)arg1;
- (void)setNeedsReresolution;
- (void)setResolutionDone:(bool)arg1;
- (void)setResolvedStyle:(id)arg1;
- (id)styles;

@end
