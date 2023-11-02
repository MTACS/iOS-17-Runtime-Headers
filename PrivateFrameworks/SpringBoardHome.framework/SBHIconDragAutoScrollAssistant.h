
@interface SBHIconDragAutoScrollAssistant : NSObject {
    <UIDropSession> * _activeDropSession;
    <SBHIconDragAutoScrollAssistantDelegate> * _delegate;
    CADisplayLink * _displayLink;
    double  _lastTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    UIView * _referenceView;
    bool  _started;
}

@property (nonatomic, retain) <UIDropSession> *activeDropSession;
@property (nonatomic) <SBHIconDragAutoScrollAssistantDelegate> *delegate;
@property (nonatomic, retain) UIView *referenceView;

- (void).cxx_destruct;
- (long long)_autoScrollDirectionForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_currentLocation;
- (void)_displayLinkFired:(id)arg1;
- (id)activeDropSession;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 referenceView:(id)arg2;
- (void)invalidate;
- (id)referenceView;
- (void)setActiveDropSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReferenceView:(id)arg1;

@end
