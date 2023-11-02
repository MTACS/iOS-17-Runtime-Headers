
@interface ICAuthorHighlightValue : NSObject {
    bool  _aboveImplicitHighlights;
    UIColor * _color;
    NSNumber * _value;
}

@property (getter=isAboveImplicitHighlights, nonatomic) bool aboveImplicitHighlights;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSNumber *value;

- (void).cxx_destruct;
- (id)color;
- (id)description;
- (bool)isAboveImplicitHighlights;
- (bool)isEqual:(id)arg1;
- (void)setAboveImplicitHighlights:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
