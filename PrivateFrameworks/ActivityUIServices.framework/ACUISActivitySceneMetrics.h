
@interface ACUISActivitySceneMetrics : NSObject <NSCopying, NSMutableCopying> {
    double  _cornerRadius;
    ACUISEdgeInsets * _edgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly, copy) ACUISEdgeInsets *edgeInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)_ActivitySceneMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)edgeInsets;
- (id)initWithSceneMetrics:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 edgeInsets:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
