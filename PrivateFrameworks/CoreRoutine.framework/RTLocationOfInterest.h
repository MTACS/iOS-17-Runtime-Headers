
@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSString * _customLabel;
    NSUUID * _identifier;
    RTLocation * _location;
    RTMapItem * _mapItem;
    long long  _type;
    unsigned long long  _typeSource;
    NSArray * _visits;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *customLabel;
@property (nonatomic, readonly) unsigned long long geoMapItemSource;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) RTLocation *location;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) RTMapItem *mapItem;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long typeSource;
@property (nonatomic, readonly) double uncertainty;
@property (nonatomic, readonly) NSArray *visits;

+ (id)geoMapItemSourceToString:(unsigned long long)arg1;
+ (bool)locationOfInterestTypeIsValid:(long long)arg1;
+ (id)locationOfInterestTypeSourceToString:(unsigned long long)arg1;
+ (id)locationOfInterestTypeToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customLabel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)geoMapItemSource;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 confidence:(double)arg2 identifier:(id)arg3 type:(long long)arg4 typeSource:(unsigned long long)arg5 visits:(id)arg6 customLabel:(id)arg7 mapItem:(id)arg8;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (id)location;
- (double)longitude;
- (id)mapItem;
- (id)nameFromType:(long long)arg1;
- (id)preferredName;
- (id)pruneVisitsWithDateInterval:(id)arg1;
- (long long)recentCompare:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setUncertainty:(double)arg1;
- (long long)type;
- (unsigned long long)typeSource;
- (double)uncertainty;
- (id)visits;

@end
