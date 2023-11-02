
@interface ASCFixedCornerRadiusOfferBackgroundStyle : ASCOfferBackgroundStyle {
    double  _cornerRadius;
}

@property (nonatomic, readonly) double cornerRadius;

- (double)cornerRadius;
- (double)cornerRadiusForImageSize:(struct CGSize { double x1; double x2; })arg1 stretchableArea:(double)arg2;
- (unsigned long long)hash;
- (id)initWithCornerRadius:(double)arg1;
- (bool)isEqual:(id)arg1;

@end
