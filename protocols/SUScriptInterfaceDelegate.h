
@protocol SUScriptInterfaceDelegate <NSObject>

@optional

- (SUDOMElement *)DOMElementForScriptInterface:(SUScriptInterface *)arg1 element:(DOMElement *)arg2;
- (SUViewController *)parentViewControllerForScriptInterface:(SUScriptInterface *)arg1;
- (ISURLRequestPerformance *)performanceMetricsForScriptInterface:(SUScriptInterface *)arg1;
- (void)scriptInterface:(SUScriptInterface *)arg1 requireCellularForResourceWithURL:(NSURL *)arg2;

@end
