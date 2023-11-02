
@interface WebNodeHighlight : NSObject {
    id  _delegate;
    WebHighlightLayer * _highlightLayer;
    WebNodeHighlightView * _highlightView;
    struct NakedPtr<WebCore::InspectorController> { 
        struct InspectorController {} *m_ptr; 
    }  _inspectorController;
    WAKView * _targetView;
}

- (id).cxx_construct;
- (void)attach;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)highlightView;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct NakedPtr<WebCore::InspectorController> { struct InspectorController {} *x1; })arg2;
- (struct NakedPtr<WebCore::InspectorController> { struct InspectorController {} *x1; })inspectorController;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (id)targetView;

@end
