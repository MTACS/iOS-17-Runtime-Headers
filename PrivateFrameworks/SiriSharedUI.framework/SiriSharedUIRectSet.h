
@interface SiriSharedUIRectSet : NSObject <NSCopying> {
    NSSet * _rectValues;
}

@property (getter=_rectValues, nonatomic, readonly, copy) NSSet *rectValues;

- (void).cxx_destruct;
- (id)_rectValues;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithFramesForViews:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)initWithRectValues:(id)arg1;

@end
