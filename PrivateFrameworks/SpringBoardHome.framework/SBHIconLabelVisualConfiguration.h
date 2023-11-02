
@interface SBHIconLabelVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    double  _baselineOffsetFromImage;
    double  _extraWidth;
    double  _fontSize;
    double  _height;
}

@property (nonatomic) double baselineOffsetFromImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double extraWidth;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (readonly) Class superclass;

- (double)baselineOffsetFromImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)extraWidth;
- (double)fontSize;
- (unsigned long long)hash;
- (double)height;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBaselineOffsetFromImage:(double)arg1;
- (void)setExtraWidth:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setHeight:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
