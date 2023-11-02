
@interface RWIProtocolDOMDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (void)attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3;
- (void)attributeRemovedWithNodeId:(int)arg1 name:(id)arg2;
- (void)characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2;
- (void)childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2;
- (void)childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3;
- (void)childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2;
- (void)customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2;
- (void)didAddEventListenerWithNodeId:(int)arg1;
- (void)didFireEventWithNodeId:(int)arg1 eventName:(id)arg2 timestamp:(double)arg3 data:(id*)arg4;
- (void)documentUpdated;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)inlineStyleInvalidatedWithNodeIds:(id)arg1;
- (void)inspectWithNodeId:(int)arg1;
- (void)powerEfficientPlaybackStateChangedWithNodeId:(int)arg1 timestamp:(double)arg2 isPowerEfficient:(bool)arg3;
- (void)pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2;
- (void)pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2;
- (void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;
- (void)shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2;
- (void)shadowRootPushedWithHostId:(int)arg1 root:(id)arg2;
- (void)willDestroyDOMNodeWithNodeId:(int)arg1;
- (void)willRemoveEventListenerWithNodeId:(int)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void)safe_attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3;
- (void)safe_attributeRemovedWithNodeId:(int)arg1 name:(id)arg2;
- (void)safe_characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2;
- (void)safe_childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2;
- (void)safe_childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3;
- (void)safe_childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2;
- (void)safe_customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2;
- (void)safe_didAddEventListenerWithNodeId:(int)arg1;
- (void)safe_didFireEventWithNodeId:(int)arg1 eventName:(id)arg2 timestamp:(double)arg3 data:(id*)arg4;
- (void)safe_documentUpdated;
- (void)safe_inlineStyleInvalidatedWithNodeIds:(id)arg1;
- (void)safe_inspectWithNodeId:(int)arg1;
- (void)safe_powerEfficientPlaybackStateChangedWithNodeId:(int)arg1 timestamp:(double)arg2 isPowerEfficient:(bool)arg3;
- (void)safe_pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2;
- (void)safe_pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2;
- (void)safe_setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;
- (void)safe_shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2;
- (void)safe_shadowRootPushedWithHostId:(int)arg1 root:(id)arg2;
- (void)safe_willDestroyDOMNodeWithNodeId:(int)arg1;
- (void)safe_willRemoveEventListenerWithNodeId:(int)arg1;

@end
