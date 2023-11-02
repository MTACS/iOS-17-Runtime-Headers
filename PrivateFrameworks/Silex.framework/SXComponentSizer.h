
@interface SXComponentSizer : NSObject {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXComponent> * _component;
    <SXComponentLayout> * _componentLayout;
    <SXComponentState> * _componentState;
    <SXComponentStyle> * _componentStyle;
    NSMutableDictionary * _infoForRendering;
    SXLayoutOptions * _layoutOptions;
    struct CGSize { 
        double width; 
        double height; 
    }  _suggestedSize;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (nonatomic, readonly) <SXComponent> *component;
@property (nonatomic, readonly) <SXComponentLayout> *componentLayout;
@property (nonatomic, retain) <SXComponentState> *componentState;
@property (nonatomic, readonly) <SXComponentStyle> *componentStyle;
@property (nonatomic, readonly) NSMutableDictionary *infoForRendering;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic) struct CGSize { double x1; double x2; } suggestedSize;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (bool)allowComponentIntersection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bordersInsetsWithUnitConverter:(id)arg1;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)component;
- (id)componentLayout;
- (id)componentState;
- (id)componentStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsWithUnitConverter:(id)arg1;
- (id)infoForRendering;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMarginsWithUnitConverter:(id)arg1;
- (id)layoutOptions;
- (long long)minimumColumnLength;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inColumnLayout:(id)arg2;
- (bool)requiresSizeChangeForStateChange:(id)arg1 fromState:(id)arg2;
- (void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2;
- (void)setComponentState:(id)arg1;
- (void)setSuggestedSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;
- (id)snapLines;
- (struct CGSize { double x1; double x2; })suggestedSize;

@end
