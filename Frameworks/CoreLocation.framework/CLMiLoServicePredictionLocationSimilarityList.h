
@interface CLMiLoServicePredictionLocationSimilarityList : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _places;
}

@property (nonatomic, readonly) NSArray *places;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaces:(id)arg1;
- (id)places;

@end
