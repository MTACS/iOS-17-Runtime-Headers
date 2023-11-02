
@interface IKJSInspectorController : NSObject <IKJSInspectorControllerDelegate> {
    IKDOMDocument * _activeDocument;
    IKAppContext * _appContext;
    struct { 
        bool respondsToActiveDocument; 
    }  _appFlags;
    IKJSInspectorCSSAgent * _cssAgent;
    <IKJSInspectorControllerDelegate> * _delegate;
    struct { 
        bool respondsToInspectElementModeChanged; 
        bool respondsToHighlightViewForElementWithOneID; 
        bool respondsToHighlightViewForElementWithManyIDs; 
        bool respondsToCancelHighlightView; 
    }  _delegateFlags;
    IKJSInspectorDOMAgent * _domAgent;
    RWIProtocolInspector * _inspector;
    NSDate * _inspectorConnectDate;
    id  _inspectorConnectedToken;
    id  _inspectorDisconnectedToken;
    IKJSInspectorNetworkAgent * _networkAgent;
    IKJSInspectorPageAgent * _pageAgent;
    <IKNetworkRequestLoader> * _requestLoader;
    IKJSInspectorStorageAgent * _storageAgent;
}

@property (nonatomic) IKDOMDocument *activeDocument;
@property (readonly) IKAppContext *appContext;
@property (nonatomic, readonly) IKJSInspectorCSSAgent *cssAgent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKJSInspectorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKJSInspectorDOMAgent *domAgent;
@property (readonly) unsigned long long hash;
@property (getter=isInspectElementModeEnabled, nonatomic, readonly) bool inspectElementModeEnabled;
@property (nonatomic, readonly) RWIProtocolInspector *inspector;
@property (nonatomic, readonly) NSDate *inspectorConnectDate;
@property (nonatomic, readonly) id inspectorConnectedToken;
@property (nonatomic, readonly) id inspectorDisconnectedToken;
@property (nonatomic, readonly) IKJSInspectorNetworkAgent *networkAgent;
@property (nonatomic, readonly) IKJSInspectorPageAgent *pageAgent;
@property (nonatomic, readonly) <IKNetworkRequestLoader> *requestLoader;
@property (nonatomic, readonly) IKJSInspectorStorageAgent *storageAgent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCurrentActiveDocument;
- (id)activeDocument;
- (id)appContext;
- (void)appDocumentDidAppear:(id)arg1;
- (void)appDocumentDidDisappear:(id)arg1;
- (void)appDocumentDidLoad:(id)arg1;
- (void)appDocumentDidUnload:(id)arg1;
- (void)appDocumentDidUpdate:(id)arg1;
- (bool)cancelHighlightView;
- (id)cssAgent;
- (void)dealloc;
- (id)delegate;
- (void)didAddEventListenerForDOMNode:(id)arg1;
- (id)domAgent;
- (void)evaluateMediaQuery:(id /* block */)arg1;
- (bool)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (bool)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (id)initWithAppContext:(id)arg1;
- (void)inspectElementModeChanged:(bool)arg1;
- (void)inspectNodeWithID:(long long)arg1;
- (id)inspector;
- (id)inspectorConnectDate;
- (id)inspectorConnectedToken;
- (id)inspectorDisconnectedToken;
- (bool)isInspectElementModeEnabled;
- (id)networkAgent;
- (id)nodeById:(long long)arg1;
- (id)nodesByIds:(id)arg1;
- (id)pageAgent;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (id)requestLoader;
- (void)resetStylesFromNode:(id)arg1;
- (void)setActiveDocument:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)storageAgent;
- (id)styleFromComposer:(id)arg1;
- (void)unregisterLoaderWithIdentifier:(id)arg1;
- (void)updateStylesheets;
- (void)willRemoveEventListenerForDOMNode:(id)arg1;

@end
