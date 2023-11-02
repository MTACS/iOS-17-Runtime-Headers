
@interface DetectedPersonData : NSObject {
    bool  _isEnabled;
    void _maxPosition;
    void _minPosition;
    void _position;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenRect;
}

@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) void maxPosition;
@property (nonatomic, readonly) void minPosition;
@property (nonatomic, readonly) void position;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenRect;

+ (id)InvalidPersonData;

- (unsigned long long)computeArea;
- (id)initWithMinPosition:(void *)arg1 maxPosition:(void *)arg2 screenRect:(void *)arg3; // needs 3 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (id)initWithNormalizedMinX:(double)arg1 maxX:(double)arg2 minY:(double)arg3 maxY:(double)arg4 depth:(float)arg5 camera:(id)arg6 orientation:(long long)arg7;
- (bool)isEnabled;
- (bool)isValid;
- (void)maxPosition;
- (void)minPosition;
- (void)position;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenRect;
- (void)setIsEnabled:(bool)arg1;

@end
