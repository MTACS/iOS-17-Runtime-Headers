
@interface CLMiLoServicePlacePrediction : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _places;
    unsigned long long  _serviceType;
}

@property (nonatomic, readonly) NSArray *places;
@property (nonatomic, readonly) unsigned long long serviceType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaces:(id)arg1 serviceType:(unsigned long long)arg2;
- (id)places;
- (unsigned long long)serviceType;

@end
