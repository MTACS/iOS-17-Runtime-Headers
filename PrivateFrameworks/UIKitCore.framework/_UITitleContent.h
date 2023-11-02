
@interface _UITitleContent : NSObject {
    NSAttributedString * _attributedText;
    double  _width;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) double width;

+ (id)contentWithTitle:(id)arg1 attributes:(id)arg2 button:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)title;
- (void)updateWithButton:(id)arg1;
- (void)updateWithTitleAttributes:(id)arg1 button:(id)arg2;
- (double)width;

@end
