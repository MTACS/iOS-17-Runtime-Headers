
@interface _UIDatePickerLinkedLabelCacheKey : NSObject {
    UIFont * _font;
    unsigned long long  _hash;
    double  _height;
    NSString * _text;
}

+ (id)keyWithText:(id)arg1 font:(id)arg2 height:(double)arg3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 font:(id)arg2 height:(double)arg3;
- (bool)isEqual:(id)arg1;

@end
