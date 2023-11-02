
@interface SPBeaconPayload : NSObject <NSSecureCoding> {
    SPAdvertisement * _advertisement;
    SPEstimatedLocation * _location;
    long long  _observationValue;
    bool  _refreshGeotag;
}

@property (nonatomic, retain) SPAdvertisement *advertisement;
@property (nonatomic, copy) SPEstimatedLocation *location;
@property (nonatomic) long long observationValue;
@property (nonatomic) bool refreshGeotag;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 location:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (long long)observationValue;
- (bool)refreshGeotag;
- (void)setAdvertisement:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setObservationValue:(long long)arg1;
- (void)setRefreshGeotag:(bool)arg1;

@end
