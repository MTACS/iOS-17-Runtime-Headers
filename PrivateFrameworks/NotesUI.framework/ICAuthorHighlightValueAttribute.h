
@interface ICAuthorHighlightValueAttribute : NSObject <NSCopying> {
    bool  _aboveImplicitHighlights;
    UIColor * _color;
    double  _value;
}

@property (getter=isAboveImplicitHighlights, nonatomic) bool aboveImplicitHighlights;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isAboveImplicitHighlights;
- (bool)isEqual:(id)arg1;
- (void)setAboveImplicitHighlights:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
