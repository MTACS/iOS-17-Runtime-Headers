
@interface ASCLockupFeatureAd : NSObject <ASCLockupFeature> {
    NSString * _developerName;
    bool  _isEditorsChoice;
    NSString * _productDescription;
    float  _productRating;
    NSString * _productRatingBadge;
    ASCScreenshots * _screenshots;
    ASCTrailers * _trailers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *developerName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditorsChoice;
@property (nonatomic, readonly, copy) NSString *productDescription;
@property (nonatomic, readonly) float productRating;
@property (nonatomic, readonly, copy) NSString *productRatingBadge;
@property (nonatomic, readonly, copy) ASCScreenshots *screenshots;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) ASCTrailers *trailers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)developerName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEditorsChoice:(bool)arg1 productRating:(float)arg2 productRatingBadge:(id)arg3 productDescription:(id)arg4 screenshots:(id)arg5 trailers:(id)arg6 developerName:(id)arg7;
- (bool)isEditorsChoice;
- (bool)isEqual:(id)arg1;
- (id)productDescription;
- (float)productRating;
- (id)productRatingBadge;
- (id)screenshots;
- (id)trailers;

@end
