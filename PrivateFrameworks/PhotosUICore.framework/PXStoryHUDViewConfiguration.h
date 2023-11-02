
@interface PXStoryHUDViewConfiguration : NSObject <PXGViewUserData> {
    double  _borderWidth;
    double  _fontSize;
    NSString * _text;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textRelativePosition;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic) double borderWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) struct CGPoint { double x1; double x2; } textInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } textRelativePosition;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fontSize;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextInsets:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextRelativePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (struct CGPoint { double x1; double x2; })textInsets;
- (struct CGPoint { double x1; double x2; })textRelativePosition;
- (id)tintColor;
- (id)title;

@end
