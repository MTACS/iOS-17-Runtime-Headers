
@interface RTTripSegmentMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _endLocationName;
    NSArray * _formOfWay;
    NSArray * _locationType;
    NSArray * _roadClass;
    NSString * _startLocationName;
}

@property (nonatomic, readonly) NSString *endLocationName;
@property (nonatomic, readonly) NSArray *formOfWay;
@property (nonatomic, readonly) NSArray *locationType;
@property (nonatomic, readonly) NSArray *roadClass;
@property (nonatomic, readonly) NSString *startLocationName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endLocationName;
- (id)formOfWay;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoadClass:(id)arg1 formOfWay:(id)arg2 locationType:(id)arg3 startLocationName:(id)arg4 endLocationName:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)locationType;
- (id)roadClass;
- (id)startLocationName;

@end
