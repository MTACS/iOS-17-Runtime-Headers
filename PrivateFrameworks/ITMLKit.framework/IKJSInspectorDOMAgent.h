
@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler> {
    IKJSInspectorController * _controller;
    int  _eventListenerIdSequence;
    NSMapTable * _eventListenersMap;
    bool  _inspectElementModeEnabled;
    RWIProtocolDOMNode * _rootNode;
    NSMutableDictionary * _searches;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInspectElementModeEnabled, nonatomic, readonly) bool inspectElementModeEnabled;
@property (readonly) Class superclass;

+ (id)_nodeIDsFromNodePaths:(id)arg1;
+ (id)_parseAttributeString:(id)arg1;

- (void).cxx_destruct;
- (int)_eventListenerIDForListener:(id)arg1;
- (void)_fullfillNodePath:(id)arg1;
- (id)controller;
- (void)didAddEventListenerForNodeID:(int)arg1;
- (void)discardSearchResultsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 searchId:(id)arg3;
- (void)documentDidChange;
- (void)documentDidUpdate;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getAssociatedDataForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getAttributesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getDataBindingsForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getDocumentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getEventListenersForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getEventListenersForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 objectGroup:(id*)arg4;
- (void)getOuterHTMLWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getSearchResultsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 searchId:(id)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
- (void)getSupportedEventNamesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (bool)hideHighlight;
- (void)hideHighlightWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)highlightNodeListWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeIds:(id)arg3 highlightConfig:(id)arg4;
- (void)highlightNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 highlightConfig:(id)arg3 nodeId:(int*)arg4 objectId:(id*)arg5;
- (id)initWithInspectorController:(id)arg1;
- (void)inspectNodeWithID:(long long)arg1;
- (bool)isInspectElementModeEnabled;
- (void)moveToWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int*)arg5;
- (void)performSearchWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 query:(id)arg3 nodeIds:(id*)arg4;
- (void)performSearchWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 query:(id)arg3 nodeIds:(id*)arg4 caseSensitive:(bool*)arg5;
- (void)removeAttributeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 name:(id)arg4;
- (void)removeNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)requestChildNodesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 depth:(int*)arg4;
- (void)setAttributeValueWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 name:(id)arg4 value:(id)arg5;
- (void)setAttributesAsTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 text:(id)arg4 name:(id*)arg5;
- (void)setEventListenerDisabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 eventListenerId:(int)arg3 disabled:(bool)arg4;
- (void)setInspectModeEnabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 enabled:(bool)arg3 highlightConfig:(id*)arg4;
- (void)setInspectModeEnabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 enabled:(bool)arg3 highlightConfig:(id*)arg4 showRulers:(bool*)arg5;
- (void)setNodeValueWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 value:(id)arg4;
- (void)setOuterHTMLWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 outerHTML:(id)arg4;
- (void)willRemoveEventListenerForNodeID:(int)arg1;

@end
