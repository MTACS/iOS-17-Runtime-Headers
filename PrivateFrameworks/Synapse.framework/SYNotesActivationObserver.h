
@interface SYNotesActivationObserver : NSObject {
    FBSDisplayLayoutMonitor * __displayLayoutMonitor;
    id /* block */  _handler;
    bool  _hasInitialVisibility;
    bool  _visible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrame;
}

@property (nonatomic, retain) FBSDisplayLayoutMonitor *_displayLayoutMonitor;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool hasInitialVisibility;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

- (void).cxx_destruct;
- (id)_displayLayoutMonitor;
- (void)_notifyHandlerOfVisibility;
- (void)_startObservingNotes;
- (void)_updateNotesVisibilityFromLayout:(id)arg1;
- (void)dealloc;
- (id /* block */)handler;
- (bool)hasInitialVisibility;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)isVisible;
- (void)setHandler:(id /* block */)arg1;
- (void)setHasInitialVisibility:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_displayLayoutMonitor:(id)arg1;
- (void)startObservingNotes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
