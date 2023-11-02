
@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler> {
    NSMapTable * _authorStylesheets;
    IKJSInspectorController * _controller;
    NSMutableDictionary * _inlineStyleMap;
    IKViewElementStyleFactory * _styleFactory;
    RWIProtocolCSSStyleSheetHeader * _templateStylesheetHeader;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_evaluator:(id)arg1 updateMediaStylesWithActiveStyles:(id)arg2 inActiveStyles:(id)arg3 defaultStyles:(id)arg4 forRule:(id)arg5 withMatch:(id)arg6;

- (void).cxx_destruct;
- (id)_getMatchedStyleRulesForNode:(id)arg1;
- (id)_getMatchedTemplateStylesForNode:(id)arg1;
- (id)_styleNodeForStylesheetId:(id)arg1;
- (id)_stylesheetBodyForStylesheetId:(id)arg1;
- (id)_updatedInlineStyleForNode:(int)arg1 withStyleString:(id)arg2;
- (id)controller;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getAllStyleSheetsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getComputedStyleForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getMatchedStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 includePseudo:(bool*)arg4 includeInherited:(bool*)arg5;
- (void)getStyleSheetTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3;
- (void)getStyleSheetWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3;
- (void)getSupportedCSSPropertiesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)mediaQueryResultDidChange;
- (void)resetStylesFromNode:(id)arg1;
- (void)setStyleSheetTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3 text:(id)arg4;
- (void)setStyleTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 text:(id)arg4;
- (void)updateStylesheets;

@end
