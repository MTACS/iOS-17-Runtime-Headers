
@interface UIKeyboardTouchInfo : NSObject {
    long long  _continuousPathState;
    bool  _delayed;
    bool  _didPlayKeyFeedback;
    bool  _dragged;
    int  _fingerID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPoint;
    int  _initialKeyState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    UIKBTree * _key;
    UIKBTree * _keyplane;
    bool  _maySuppressUpAction;
    unsigned long long  _processedTouchCount;
    UIKBTree * _slidOffKey;
    int  _stage;
    NSMutableArray * _touchHistory;
}

@property (nonatomic) long long continuousPathState;
@property (nonatomic) bool delayed;
@property (nonatomic) bool didPlayKeyFeedback;
@property (nonatomic) bool dragged;
@property (nonatomic) int fingerID;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialDragPoint;
@property (nonatomic) int initialKeyState;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPoint;
@property (nonatomic, retain) UIKBTree *key;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic) bool maySuppressUpAction;
@property (nonatomic) unsigned long long processedTouchCount;
@property (nonatomic, retain) UIKBTree *slidOffKey;
@property (nonatomic) int stage;
@property (nonatomic, readonly) UIKBTouchState *touch;
@property (nonatomic, readonly) NSMutableArray *touchHistory;

- (void).cxx_destruct;
- (void)addTouch:(id)arg1;
- (long long)continuousPathState;
- (bool)delayed;
- (bool)didPlayKeyFeedback;
- (bool)dragged;
- (int)fingerID;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialDragPoint;
- (int)initialKeyState;
- (struct CGPoint { double x1; double x2; })initialPoint;
- (id)key;
- (id)keyplane;
- (bool)maySuppressUpAction;
- (unsigned long long)processedTouchCount;
- (void)setContinuousPathState:(long long)arg1;
- (void)setDelayed:(bool)arg1;
- (void)setDidPlayKeyFeedback:(bool)arg1;
- (void)setDragged:(bool)arg1;
- (void)setFingerID:(int)arg1;
- (void)setInitialDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialKeyState:(int)arg1;
- (void)setInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKey:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setMaySuppressUpAction:(bool)arg1;
- (void)setProcessedTouchCount:(unsigned long long)arg1;
- (void)setSlidOffKey:(id)arg1;
- (void)setStage:(int)arg1;
- (id)slidOffKey;
- (int)stage;
- (id)touch;
- (id)touchHistory;

@end
