
@interface WKLayeredStripeWallpaperInput : NSObject <NAIdentifiable, NSCopying, WKDescribable> {
    UIColor * _backgroundColor;
    double  _firstStripeOffsetScaleFactor;
    double  _stripeAngleDegrees;
    double  _stripeHeightFactor;
}

@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ descriptionBuilderBlock;
@property (nonatomic, readonly) double firstStripeOffsetScaleFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double stripeAngleDegrees;
@property (nonatomic, readonly) double stripeHeightFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NADescriptionBuilder *wk_descriptionBuilder;

+ (id)na_identity;
+ (id)new;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (double)firstStripeOffsetScaleFactor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBackgroundColor:(id)arg1 stripeAngleDegrees:(double)arg2 stripeHeightFactor:(double)arg3 firstStripeOffsetScaleFactor:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)stripeAngleDegrees;
- (double)stripeHeightFactor;
- (id)wk_descriptionBuilder;

@end
