
@interface WFActionViewModel : NSObject <WFActionEventObserver, WFParameterEventObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _accessResourcesAllowingMultipleAccounts;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _accessResourcesThatCanLogOut;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isExpanded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isFavorite;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _resourceError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showOutput;
    void action;
    void additionalParameterSummaries;
    void onParameterStateChange;
    void onVisibleParametersChange;
    void parameterSummary;
    void showMoreParameters;
    void visibleParameters;
}

- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)actionIconDidChange:(id)arg1;
- (void)actionNameDidChange:(id)arg1;
- (void)actionOutputDetailsDidChange:(id)arg1;
- (void)actionReloadAuxiliaryButton:(id)arg1;
- (void)dealloc;
- (void)favoritesDidChange;
- (id)init;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)pasteboardDidChange;
- (void)resourcesDidChange:(id)arg1;

@end
