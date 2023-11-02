
@interface RWIProtocolCSSDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)mediaQueryResultChanged;
- (void)nodeLayoutFlagsChangedWithNodeId:(int)arg1 layoutFlags:(id*)arg2;
- (void)styleSheetAddedWithHeader:(id)arg1;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)styleSheetRemovedWithStyleSheetId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void)safe_mediaQueryResultChanged;
- (void)safe_nodeLayoutFlagsChangedWithNodeId:(int)arg1 layoutFlags:(id*)arg2;
- (void)safe_styleSheetAddedWithHeader:(id)arg1;
- (void)safe_styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)safe_styleSheetRemovedWithStyleSheetId:(id)arg1;

@end
