
@interface _UIDragEventSample : NSObject {
    bool  _hasBeenDelivered;
    bool  _isApplicationEnter;
    bool  _isApplicationExit;
    bool  _isApplicationWithin;
    bool  _isDragEnd;
    bool  _isPolicyDriven;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _locationInWindow;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _sceneLocation;
    UIWindow * _window;
    unsigned int  _windowServerHitTestContextID;
}

@property (nonatomic) bool hasBeenDelivered;
@property (nonatomic, readonly) bool isApplicationEnter;
@property (nonatomic, readonly) bool isApplicationExit;
@property (nonatomic, readonly) bool isApplicationWithin;
@property (nonatomic, readonly) bool isDragEnd;
@property (nonatomic, readonly) bool isPolicyDriven;
@property (nonatomic, readonly) struct CAPoint3D { double x1; double x2; double x3; } locationInWindow;
@property (nonatomic, readonly) struct CAPoint3D { double x1; double x2; double x3; } sceneLocation;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) unsigned int windowServerHitTestContextID;

+ (id)sampleFromHIDEvent:(struct __IOHIDEvent { }*)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)hasBeenDelivered;
- (id)hitTestWithEvent:(id)arg1;
- (bool)isApplicationEnter;
- (bool)isApplicationExit;
- (bool)isApplicationWithin;
- (bool)isDragEnd;
- (bool)isPolicyDriven;
- (struct CAPoint3D { double x1; double x2; double x3; })locationInWindow;
- (struct CAPoint3D { double x1; double x2; double x3; })sceneLocation;
- (void)setHasBeenDelivered:(bool)arg1;
- (id)window;
- (unsigned int)windowServerHitTestContextID;

@end
