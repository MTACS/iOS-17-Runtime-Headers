
@interface SMSessionDestination : NSObject <NSSecureCoding> {
    NSData * _destinationMapItem;
    unsigned long long  _destinationType;
    SMSessionDestinationEta * _eta;
    RTLocation * _location;
    double  _radius;
}

@property (nonatomic, readonly) CLLocation *clLocation;
@property (nonatomic, readonly) NSData *destinationMapItem;
@property (nonatomic, readonly) unsigned long long destinationType;
@property (nonatomic, readonly) SMSessionDestinationEta *eta;
@property (nonatomic, readonly) RTLocation *location;
@property (nonatomic, readonly) double radius;

+ (unsigned long long)convertPlaceTypeToDestinationType:(unsigned long long)arg1;
+ (id)destinationTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clLocation;
- (id)description;
- (id)destinationMapItem;
- (unsigned long long)destinationType;
- (void)encodeWithCoder:(id)arg1;
- (id)eta;
- (unsigned long long)hash;
- (id)initWithCLLocation:(id)arg1 eta:(id)arg2 radius:(double)arg3 destinationType:(unsigned long long)arg4 destinationMapItem:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocation:(id)arg1 eta:(id)arg2 radius:(double)arg3 destinationType:(unsigned long long)arg4 destinationMapItem:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)outputToDictionary;
- (double)radius;

@end
