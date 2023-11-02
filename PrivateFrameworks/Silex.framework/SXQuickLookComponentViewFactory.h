
@interface SXQuickLookComponentViewFactory : SXComponentViewFactory {
    <SXQuickLookComponentFileProvider> * _fileProvider;
    <SXQuickLookModule> * _quickLookModule;
}

@property (nonatomic, readonly) <SXQuickLookComponentFileProvider> *fileProvider;
@property (nonatomic, readonly) <SXQuickLookModule> *quickLookModule;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)fileProvider;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 fileProvider:(id)arg5 quickLookModule:(id)arg6;
- (id)quickLookModule;
- (int)role;
- (id)type;

@end
