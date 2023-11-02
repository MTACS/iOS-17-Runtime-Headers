
@interface WFSearchVisualConfiguration : NSObject <NSCopying> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textFieldLandscapeLayoutInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textFieldPortraitLayoutInsets;
    double  _textFieldWidth;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textFieldLandscapeLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textFieldPortraitLayoutInsets;
@property (nonatomic) double textFieldWidth;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setTextFieldLandscapeLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextFieldPortraitLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextFieldWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textFieldLandscapeLayoutInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textFieldPortraitLayoutInsets;
- (double)textFieldWidth;

@end
