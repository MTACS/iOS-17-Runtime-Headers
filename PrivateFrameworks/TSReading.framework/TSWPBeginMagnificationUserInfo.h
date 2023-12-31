
@interface TSWPBeginMagnificationUserInfo : NSObject {
    bool  _animated;
    struct CGPoint { 
        double x; 
        double y; 
    }  _magnificationPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    TSWPRep * _target;
}

@property (nonatomic) bool animated;
@property (nonatomic) struct CGPoint { double x1; double x2; } magnificationPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) TSWPRep *target;

- (bool)animated;
- (struct CGPoint { double x1; double x2; })magnificationPoint;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setAnimated:(bool)arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
