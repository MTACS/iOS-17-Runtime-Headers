
@interface HAENGeoLocation : NSObject {
    NSString * countryCode;
    NSString * immutableDescription;
    unsigned int  source;
    unsigned int  sourceDevice;
    NSDate * timestamp;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *immutableDescription;
@property (nonatomic, readonly) unsigned int source;
@property (nonatomic, readonly) unsigned int sourceDevice;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)countryCode;
- (id)describeSource;
- (id)description;
- (void)fetchGeoLocation;
- (id)immutableDescription;
- (id)init;
- (unsigned int)source;
- (unsigned int)sourceDevice;
- (id)timestamp;

@end
