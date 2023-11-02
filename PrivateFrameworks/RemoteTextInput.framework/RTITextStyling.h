
@interface RTITextStyling : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _attributes;
    NSString * _fontName;
    double  _fontSize;
    double  _fontWeight;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly, copy) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;

+ (bool)supportsSecureCoding;
+ (id)textStylingWithFontName:(id)arg1 fontSize:(double)arg2 fontWeight:(double)arg3;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontName;
- (double)fontSize;
- (double)fontWeight;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
