
@interface _UIKeyboardInputModeIconConfiguration : NSObject {
    bool  _background;
    double  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _weight;
}

@property (nonatomic) bool background;
@property (nonatomic) double scaleFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) long long weight;

+ (id)defaultConfiguration;

- (bool)background;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)scaleFactor;
- (void)setBackground:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWeight:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (long long)weight;

@end
