
@interface AVTUIStyle : NSObject {
    UIColor * _backgroundColor;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *textColor;

+ (id)darkStyle;
+ (id)lightStyle;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;

@end
