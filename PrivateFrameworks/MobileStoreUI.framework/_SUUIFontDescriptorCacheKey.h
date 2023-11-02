
@interface _SUUIFontDescriptorCacheKey : NSObject {
    NSString * _sizeCategory;
    struct __CFString { } * _textStyle;
}

@property (nonatomic, readonly) NSString *sizeCategory;
@property (nonatomic, readonly) struct __CFString { }*textStyle;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTextStyle:(struct __CFString { }*)arg1 sizeCategory:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sizeCategory;
- (struct __CFString { }*)textStyle;

@end
