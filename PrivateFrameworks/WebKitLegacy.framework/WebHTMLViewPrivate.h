
@interface WebHTMLViewPrivate : NSObject {
    bool  closed;
    struct RetainPtr<WebDataSource> { 
        void *m_ptr; 
    }  dataSource;
    bool  exposeInputContext;
    bool  handlingMouseDownEvent;
    bool  ignoringMouseDraggedEvents;
    bool  inScrollPositionChanged;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; bool x2; bool x3; bool x4; bool x5; } * interpretKeyEventsParameters;
    struct RetainPtr<WebEvent> { 
        void *m_ptr; 
    }  keyDownEvent;
    struct CGPoint { 
        double x; 
        double y; 
    }  lastScrollPosition;
    WAKView * layerHostingView;
    struct RetainPtr<WebEvent> { 
        void *m_ptr; 
    }  mouseDownEvent;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  pageRects;
    bool  paginateScreenContent;
    struct RetainPtr<WebPluginController> { 
        void *m_ptr; 
    }  pluginController;
    bool  printing;
    SEL  selectorForDoCommandBySelector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;

@end
