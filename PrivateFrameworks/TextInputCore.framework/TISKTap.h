
@interface TISKTap : NSObject {
    NSMutableArray * _dragTouches;
    TIKeyboardTouchEvent * _firstTouch;
    TIKeyboardTouchEvent * _lastTouch;
    TIKeyboardLayout * _layout;
    long long  _pathIndex;
}

@property (getter=isDownUpTap, nonatomic, readonly) bool downup;
@property (nonatomic, retain) NSMutableArray *dragTouches;
@property (nonatomic, retain) TIKeyboardTouchEvent *firstTouch;
@property (nonatomic, retain) TIKeyboardTouchEvent *lastTouch;
@property (nonatomic, retain) TIKeyboardLayout *layout;
@property (nonatomic, readonly) unsigned long long numberOfDrags;
@property (nonatomic) long long pathIndex;

- (void).cxx_destruct;
- (long long)_forcedKeyCode;
- (void)addDragTouch:(id)arg1;
- (double)distance:(id)arg1 withTouch:(id)arg2;
- (double)downErrorDistance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dragTouches;
- (id)firstTouch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getFrameForKey:(id)arg1;
- (id)init:(id)arg1 layout:(id)arg2;
- (bool)isDownUpTap;
- (id)lastTouch;
- (id)layout;
- (unsigned long long)numberOfDrags;
- (long long)pathIndex;
- (void)setDragTouches:(id)arg1;
- (void)setFirstTouch:(id)arg1;
- (void)setLastTouch:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setPathIndex:(long long)arg1;
- (id)stringForIntendedKey;
- (double)totalTapDistance;
- (double)upErrorDistance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
